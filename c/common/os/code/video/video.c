/**
 * Copyright 2019 AbbeyCatUK
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */



// 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - -


#include <stdint.h>

#include "basic/header/directive/break.h"
#include "basic/header/directive/escape.h"
#include "os/header/video/video.h"
#include "basic/header/core/basic.h"

#include "stdio.h"


// 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - -



void video_printline( char *pstring )
{

        printf( pstring );
        printf( "\n" );

}



// 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - -



void video_print( char *pstring )
{

        printf( pstring );

}



// 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - -



void video_clearscreen( void )
{

	//struct _kernel_regs in, out;
	//_kernel_swi( OS_ClearScreen, &in, &out );


}



// 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - -



/*
 * call with allowable MODE value (0,1,2,4,5,7)
 *
 */
void video_setmode( int requested_mode )
{

	//struct _kernel_regs in, out;
	//in.r[0] = (unsigned int) requested_mode;
	//_kernel_swi( OS_SetMode, &in, &out );

}



// 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - -



void video_rectangle( int x1 , int y1 , int x2 , int y2 )
{

}



// 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - -



void video_point( int x , int y )
{

}



// 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - -



void video_line( int x1 , int y1 , int x2 , int y2 )
{

}


// 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - -


void video_setcolour( int foreground, int r, int g, int b )
{

	//struct _kernel_regs in, out;
	//in.r[0] = (unsigned int) foreground;
	//in.r[1] = (unsigned int) r;
	//in.r[2] = (unsigned int) g;
	//in.r[3] = (unsigned int) b;
	//_kernel_swi( OS_SetColour, &in, &out );

}

  