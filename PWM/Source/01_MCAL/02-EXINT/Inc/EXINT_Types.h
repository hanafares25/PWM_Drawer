/* EXINT_Types.h */

#ifndef SOURCE_01_MCAL_02_EXINT_INC_EXINT_TYPES_H_
#define SOURCE_01_MCAL_02_EXINT_INC_EXINT_TYPES_H_

typedef enum
{
 EXT_INT0,
 EXT_INT1,
 EXT_INT2
}ext_Int_t;


typedef enum
{
 LOW_LEVEL,
 BOTH_EDGES,
 FAILING_EDGE,
 RISING_EDGE
}snc_mode_t;

#endif /* SOURCE_01_MCAL_02_EXINT_INC_EXINT_TYPES_H_ */
