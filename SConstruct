mcu = 'attiny84a'

cflags = ['-Os', '-Wall', '-Wno-main','-fshort-enums', '-fpack-struct']
crosspack = '/usr/local/Crosspack-AVR/bin'

# Should avr use Environment(platform) instead of tool?
avr = Environment(tools=['default', 'avr'], toolpath=['scons'],
                  MCU=mcu, AVRPATH=crosspack)
avr.Append(CFLAGS=cflags)

elf_file = avr.Program('main.c')
avr.DisplaySizes('size', elf_file)
avr.DisplayASM('asm', elf_file)

eep_file = avr.EepFile(elf_file)
hex_file = avr.HexFile(elf_file)

Default(hex_file)

if GetOption('clean'):
    Default([hex_file, eep_file])
