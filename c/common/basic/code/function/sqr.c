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

#include "basic/header/function/sqr.h"
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
 * synopsis			sqr := sqr(x)
 * 					x must be an INTEGER or a REAL
 * 					returns a REAL declaring the square root of x
 * 
 */
void _function_sqr( void )
{

	int type;
	union symbol_table_entry_value operand;

	// SQR requires a single-element parameter list (containing an INTEGER or a REAL).
	if ( !expect_expression() )
		{ set_error_state( ERROR_SYNTAX ); return; }
	if ( !expect_token( PUNC_CLOSE_BRACKET ) )
		{ set_error_state( ERROR_EXPECTED_CLOSE_BRACKET );    return; }
	
 	// check for a type mismatch
 	type = *(operand_stack_ptr+operand_stack_offset-1);
 	switch ( type )
 	{
 		case DATATYPE_INTEGER : 
 			operand.ival = pop_operand_integer();
 			operand.rval = sqrt( (double) (operand.ival) );
 			if ( isnan(operand.rval) )
 				{ set_error_state( ERROR_NOT_A_NUMBER ); return; }
 			push_operand_real( operand.rval );          
 			break;
 		case DATATYPE_REAL : 
 			operand.rval = pop_operand_real();
 			operand.rval = sqrt( (double) (operand.rval) );
 			if ( isnan(operand.rval) )
 				{ set_error_state( ERROR_NOT_A_NUMBER ); return; }
 			push_operand_real( operand.rval );          
 			break;
 		default               : 
 			set_error_state( ERROR_TYPE_MISMATCH );	return; 
 			break; 
 	}
		
}
