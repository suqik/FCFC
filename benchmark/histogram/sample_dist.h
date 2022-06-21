/*******************************************************************************
* benchmark/histogram/sample_dist.h: this file is part of the FCFC program.

* FCFC: Fast Correlation Function Calculator.

* Github repository:
        https://github.com/cheng-zhao/FCFC

* Copyright (c) 2020 -- 2022 Cheng Zhao <zhaocheng03@gmail.com>
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.

*******************************************************************************/

#ifndef __CREATE_DATA_H__
#define __CREATE_DATA_H__

#include <stddef.h>

/*============================================================================*\
                  Interfaces for generating the data catalogue
\*============================================================================*/

/******************************************************************************
Function `sample_dist`:
  Generate an array for squared distances, with the PDF of sqrt(x).
Arguments:
  * `dist`:     the array for squared distances;
  * `dmax`:     the maximum squared distance;
  * `nsp`:      total number of particles to be generated;
  * `seed`:     random seed.
******************************************************************************/
void sample_dist(real *dist, const real dmax, const size_t nsp,
    const int seed);

#endif