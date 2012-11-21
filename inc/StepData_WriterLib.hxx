// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_WriterLib_HeaderFile
#define _StepData_WriterLib_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepData_NodeOfWriterLib_HeaderFile
#include <Handle_StepData_NodeOfWriterLib.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepData_ReadWriteModule_HeaderFile
#include <Handle_StepData_ReadWriteModule.hxx>
#endif
#ifndef _Handle_StepData_Protocol_HeaderFile
#include <Handle_StepData_Protocol.hxx>
#endif
#ifndef _Handle_StepData_GlobalNodeOfWriterLib_HeaderFile
#include <Handle_StepData_GlobalNodeOfWriterLib.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepData_NodeOfWriterLib;
class Standard_NoSuchObject;
class Standard_Transient;
class StepData_ReadWriteModule;
class StepData_Protocol;
class StepData_GlobalNodeOfWriterLib;



class StepData_WriterLib  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void SetGlobal(const Handle(StepData_ReadWriteModule)& amodule,const Handle(StepData_Protocol)& aprotocol) ;
  
  Standard_EXPORT   StepData_WriterLib(const Handle(StepData_Protocol)& aprotocol);
  
  Standard_EXPORT   StepData_WriterLib();
  
  Standard_EXPORT     void AddProtocol(const Handle(Standard_Transient)& aprotocol) ;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void SetComplete() ;
  
  Standard_EXPORT     Standard_Boolean Select(const Handle(Standard_Transient)& obj,Handle(StepData_ReadWriteModule)& module,Standard_Integer& CN) const;
  
  Standard_EXPORT     void Start() ;
  
  Standard_EXPORT     Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT    const Handle_StepData_ReadWriteModule& Module() const;
  
  Standard_EXPORT    const Handle_StepData_Protocol& Protocol() const;





protected:





private:



Handle_StepData_NodeOfWriterLib thelist;
Handle_StepData_NodeOfWriterLib thecurr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
