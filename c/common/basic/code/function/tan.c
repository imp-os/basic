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


// include the library
/*
#include "../library/include/maths.h"
*/
#include "maths.h"

#include "basic/header/function/tan.h"
#include "basic/header/core/basic.h"
#include "basic/header/language/define.h"	// for the optional parameters handling code
#include "basic/header/language/expression.h"



// 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - - 8 < - - - - - - - - - -



/**
 * 
 * requires			void
 *
 * returns			void
 * 
 * synopsis			tan := tan(x)
 * 					x is an integer or a real
 * 					returns the result of the TAN function using 'x' as the parameter where x is a measurement in degrees.
 * 
 */
void _function_tan( void )
{

	int type;

	// TAN requires a single-element parameter list (containing an INTEGER).
	if ( !expect_expression() )
		{ set_error_state( ERROR_SYNTAX ); return; }
	if ( !expect_token( PUNC_CLOSE_BRACKET ) )
		{ set_error_state( ERROR_EXPECTED_CLOSE_BRACKET );    return; }
	
 	// check for a type mismatch
 	type = *(operand_stack_ptr+operand_stack_offset-1);
 	switch ( type )
 	{
 		case DATATYPE_INTEGER : 
 			push_operand_real( (float) tan( (double) (pop_operand_integer() * 3.142 / 180) ) );          
 			break;
 		case DATATYPE_REAL : 
 			push_operand_real( (float) tan( (double) (pop_operand_real()    * 3.142 / 180) ) );          
 			break;
 		default               : 
 			set_error_state( ERROR_TYPE_MISMATCH );	return; 
 			break; 
 	}	
 	
}
