/**
 * @file
 * @brief Functions related to the options menu.
**/

#pragma once


// calls the options menu
void call_gui();

// read from options text file
bool read_options();

// write to options text file
bool write_options();

// get options and spit some out
void options_menu();