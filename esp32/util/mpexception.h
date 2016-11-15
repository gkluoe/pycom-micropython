/*
 * Copyright (c) 2016, Pycom Limited.
 *
 * This software is licensed under the GNU GPL version 3 or any
 * later version, with permitted additional terms. For more information
 * see the Pycom Licence v1.0 document supplied with this file, or
 * available at https://www.pycom.io/opensource/licensing
 */

#ifndef MPEXCEPTION_H_
#define MPEXCEPTION_H_

extern const char mpexception_os_resource_not_avaliable[];
extern const char mpexception_os_operation_failed[];
extern const char mpexception_os_request_not_possible[];
extern const char mpexception_value_invalid_arguments[];
extern const char mpexception_num_type_invalid_arguments[];
extern const char mpexception_uncaught[];

extern int        user_interrupt_char;


extern void mpexception_init0 (void);
extern void mpexception_set_interrupt_char (int c);
extern void mpexception_nlr_jump (void *o);
extern void mpexception_keyboard_nlr_jump (void);

#endif /* MPEXCEPTION_H_ */
