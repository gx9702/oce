// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_TypeOfUpdate_HeaderFile
#define _V3d_TypeOfUpdate_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Determines the type of update of the view
//! -   V3d_ASAP: as soon as possible. The view is updated immediately after a modification.
//! -   V3d_WAIT: deferred. The view is updated when the Update function is called.
enum V3d_TypeOfUpdate
{
V3d_ASAP,
V3d_WAIT
};

#endif // _V3d_TypeOfUpdate_HeaderFile
