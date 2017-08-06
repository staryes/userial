/* ------------------------------------------------------------------------ --
--                                                                          --
--                        PC serial port connection object                  --
--                           for non-event-driven programs                  --
--                                                                          --
--                                                                          --
--                                                                          --
--  Copyright @ 2001          Thierry Schneider                             --
--                            thierry@tetraedre.com                         --
--                                                                          --
--                                                                          --
--                                                                          --
-- ------------------------------------------------------------------------ --
--                                                                          --
--  Filename : tserial.h                                                    --
--  Author   : Thierry Schneider                                            --
--  Created  : April 4th 2000                                               --
--  Modified : April 8th 2001                                               --
--  Plateform: Windows 95, 98, NT, 2000 (Win32)                             --
-- ------------------------------------------------------------------------ --
--                                                                          --
--  This software is given without any warranty. It can be distributed      --
--  free of charge as long as this header remains, unchanged.               --
--                                                                          --
-- ------------------------------------------------------------------------ */




/* ---------------------------------------------------------------------- */
#ifndef USERIAL_H
#define USERIAL_H

#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>

int set_interface_attribs (int fd, int speed, int parity);
void set_blocking (int fd, int should_block);
int userial_set_connection(char *portname);
void userial_write(int fd, char *out, int outLength);
int userial_read(int fd, char* buf);
void userial_close_connection(int fd);

#endif //USERIAL_H
