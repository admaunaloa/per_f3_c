/**
 * @file bsp_gpio.c
 *
 * This file contains the Board Support Package (BSP)  GPIO
 *
 * Copyright (c) 2023 admaunaloa admaunaloa@gmail.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "bsp_gpio.h"

/// Initialize GPIO
void bsp_gpio_init(void)
{
    per_gpio_init_in(bsp_user_button_1(), PER_GPIO_PUPD_PULL_DOWN);

    per_gpio_init_out(bsp_gpio_led_blue(), PER_GPIO_OTYPE_PUSH_PULL, PER_GPIO_OSPEED_LOW);

    per_gpio_init_out_af(bsp_gpio_usart2_tx(), PER_GPIO_OTYPE_PUSH_PULL, PER_GPIO_OSPEED_MEDIUM, PER_GPIO_AF_USART2);
    per_gpio_init_in_af(bsp_gpio_usart2_rx(), PER_GPIO_PUPD_PULL_UP, PER_GPIO_AF_USART2);
}
