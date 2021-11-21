/*
 * func.h
 *
 *  Created on: Nov 7, 2021
 *      Author: 64BIT
 */

#ifndef INC_FUNC_H_
#define INC_FUNC_H_

void Func1(void);
void Func2(void);
void Func3(void);
void Func4(void);
void Func5(void);

void (*pFn1)(void) = Func1;
void (*pFn2)(void) = Func2;
void (*pFn3)(void) = Func3;
void (*pFn4)(void) = Func4;
void (*pFn5)(void) = Func5;


#endif /* INC_FUNC_H_ */
