/**
	@File	Common_hjw.h
	@Brief
		Header which includes common header and functions
	@Author
		Jungwoo Heo (jungwoo.jeff.heo@gmail.com)
	@Date
		2019-11-22
	@Section	LICENSE(BSD)
		COPYRIGHT(c). 2019. SEOUL, KOREA.

		Redistribution and use in source and binary forms, with or without  
    modification, are permitted provided that the following conditions are  
    met: 
 
        * Redistributions of source code must retain the above copyright  
        notice, this list of conditions and the following disclaimer. 
        * Redistributions in binary form must reproduce the above copyright  
        notice, this list of conditions and the following disclaimer in the  
        documentation and/or other materials provided with the distribution. 
        * Neither the name of the <ORGANIZATION> nor the names of its  
        contributors may be used to endorse or promote products derived from  
        this software without specific prior written permission. 
 
    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS  
    IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED  
    TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A  
    PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER  
    OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,  
    EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,  
    PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR  
    PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF  
    LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING  
    NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS  
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


#ifndef _COMMON_HJW_H
#define _COMMON_HJW_H

#include <iostream>
#include "ReturnCode_hjw.h"

#define CHECK_NATURE_NUMBER(X)	{if(X<0) return eError_Negative; }

#endif //~_COMMON_HJW_H