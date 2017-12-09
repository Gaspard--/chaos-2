/* ------------------------------------------------------------------------ *\
**
**  This file is part of the Chaos Kernel, and is made available under
**  the terms of the GNU General Public License version 2.
**
**  Copyright (C) 2017 - Benjamin Grange <benjamin.grange@epitech.eu>
**
\* ------------------------------------------------------------------------ */

#ifndef _KERNEL_INTERRUPTS_H_
# define _KERNEL_INTERRUPTS_H_

/*
** This file relies on a common implementation of the following items for each
** architectures.
*/
void	enable_interrupts(void);
void	disable_interrupts(void);
void	push_interrupts_state(void *save);
void	pop_interrupts_state(void *save);
void	register_int_handler(uint vector, void *handler);
void	unregister_int_handler(uint vector);
void	halt(void);

#endif /* !_KERNEL_INTERRUPTS_H_ */