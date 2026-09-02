#include "../include/qemu.h"

void emilia_logo()
{
    uart_write_string("\n");
    uart_write_string("                                 o8o\n");
    uart_write_string("                             `\"'  `888   `\"'\n");
    uart_write_string(" .ooooo.  ooo. .oo.  .oo.   oooo   888  oooo   .oooo.\n");
    uart_write_string("d88' `88b `888P\"Y88bP\"Y88b  `888   888  `888  `P  )88b\n");
    uart_write_string("888ooo888  888   888   888   888   888   888   .oP\"888\n");
    uart_write_string("888    .o  888   888   888   888   888   888  d8(  888\n");
    uart_write_string("`Y8bod8P' o888o o888o o888o o888o o888o o888o `Y888\"\"8o\n");
    uart_write_string("\n");
    uart_write_string("\n");
    uart_write_string("                         oooo    oooo                                          oooo\n");
    uart_write_string("                         `888   .8P'                                           `888\n");
    uart_write_string("             oooo  oooo   888  d8'     .ooooo.  oooo d8b ooo. .oo.    .ooooo.   888\n");
    uart_write_string("             `888  `888   88888[      d88' `88b `888""8P `888P\"Y88b  d88\' `88b  888\n");
    uart_write_string("              888   888   888`88b.    888ooo888  888      888   888  888ooo888  888\n");
    uart_write_string("              888   888   888  `88b.  888    .o  888      888   888  888    .o  888\n");
    uart_write_string("              `V88V\"V8P\' o888o  o888o `Y8bod8P\' d888b    o888o o888o `Y8bod8P\' o888o\n");
    uart_write_string("\n");
}

void emilia_main()
{
    // Logo
    emilia_logo();

    // Test passed
    SIFIVE_TEST_PASS();
}