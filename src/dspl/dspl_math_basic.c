/*
* Copyright (c) 2015, 2016 Sergey Bakhurin
* Digital Signal Processing Library [http://dsplib.org]
*
* This file is part of DSPL.
* 
* DSPL is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
*(at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU Lesser General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <stdlib.h>      
#include <math.h>
#include "dspl.h"


DSPL_API int dspl_cos_cmplx(double xR, double xI, double *yR, double *yI)
{
	double t, wn, wp;
	
	if(!yR && !yI)
		return DSPL_ERROR_PTR;
		
	
	wn = exp(-xI);
	wp = exp( xI);
	
	t   = 0.5*cos(xR)*(wn+wp);
	*yI = 0.5*sin(xR)*(wn+wp);
	*yR = t;
	return DSPL_OK;
	
}


DSPL_API int dspl_sin_cmplx(double xR, double xI, double *yR, double *yI)
{
	double t, wn, wp;
	
	if(!yR && !yI)
		return DSPL_ERROR_PTR;
		
	
	wn = exp(-xI);
	wp = exp( xI);
	
	t   = 0.5*sin(xR)*(wn+wp);
	*yI =- 0.5*cos(xR)*(wn+wp);
	*yR = t;
	return DSPL_OK;
	
}