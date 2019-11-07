//
//  calc.c
//  CalcC3
//
//  Created by Szeto, Colin on 11/1/19.
//  Copyright © 2019 Maheshwari,Navodit. All rights reserved.
//

#include "calc.h"
#include <math.h>
double calc(double arg1 ,int mathOp,double arg2){
     
double calcAnswer = 0.0;
     
switch(mathOp)
      {
          case PLUS:

              calcAnswer = arg1 + arg2;
              break;
          case MINUS:

              calcAnswer = arg1 - arg2;
              break;
          case DIVIDE:

              calcAnswer = arg1 / arg2;
              break;
          case MULTIPLY:

              calcAnswer = arg1 * arg2;
              break;
          case SQUARE:

              arg2 = arg1;
              calcAnswer = arg1 * arg2;
              break;
          case MODULO:

              calcAnswer = (double)((int)arg1 % (int)arg2);
              break;
              
          case TRI:
              calcAnswer = sqrt(arg1*arg1+arg2*arg2);
              break;
          case -1:
              calcAnswer = arg1;
              
      }

     return calcAnswer;
}

