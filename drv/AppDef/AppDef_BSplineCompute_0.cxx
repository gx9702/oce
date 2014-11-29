// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <AppDef_BSplineCompute.hxx>

#include <TColStd_HArray1OfReal.hxx>
#include <TColStd_HArray1OfInteger.hxx>
#include <AppParCurves_HArray1OfConstraintCouple.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_MyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <AppParCurves_MultiBSpCurve.hxx>
#include <AppParCurves_MultiCurve.hxx>
 

#define MultiLine AppDef_MultiLine
#define MultiLine_hxx <AppDef_MultiLine.hxx>
#define LineTool AppDef_MyLineTool
#define LineTool_hxx <AppDef_MyLineTool.hxx>
#define Approx_MyBSplGradient AppDef_MyBSplGradientOfBSplineCompute
#define Approx_MyBSplGradient_hxx <AppDef_MyBSplGradientOfBSplineCompute.hxx>
#define Approx_BSpParLeastSquareOfMyBSplGradient AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute
#define Approx_BSpParLeastSquareOfMyBSplGradient_hxx <AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx>
#define Approx_BSpParFunctionOfMyBSplGradient AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute
#define Approx_BSpParFunctionOfMyBSplGradient_hxx <AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx>
#define Approx_BSpGradient_BFGSOfMyBSplGradient AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute
#define Approx_BSpGradient_BFGSOfMyBSplGradient_hxx <AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute.hxx>
#define Approx_BSpParLeastSquareOfMyBSplGradient AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute
#define Approx_BSpParLeastSquareOfMyBSplGradient_hxx <AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx>
#define Approx_BSpParFunctionOfMyBSplGradient AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute
#define Approx_BSpParFunctionOfMyBSplGradient_hxx <AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx>
#define Approx_BSpGradient_BFGSOfMyBSplGradient AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute
#define Approx_BSpGradient_BFGSOfMyBSplGradient_hxx <AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute.hxx>
#define Approx_MyGradientbis AppDef_MyGradientbisOfBSplineCompute
#define Approx_MyGradientbis_hxx <AppDef_MyGradientbisOfBSplineCompute.hxx>
#define Approx_ParLeastSquareOfMyGradientbis AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute
#define Approx_ParLeastSquareOfMyGradientbis_hxx <AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx>
#define Approx_ResConstraintOfMyGradientbis AppDef_ResConstraintOfMyGradientbisOfBSplineCompute
#define Approx_ResConstraintOfMyGradientbis_hxx <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#define Approx_ParFunctionOfMyGradientbis AppDef_ParFunctionOfMyGradientbisOfBSplineCompute
#define Approx_ParFunctionOfMyGradientbis_hxx <AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx>
#define Approx_Gradient_BFGSOfMyGradientbis AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute
#define Approx_Gradient_BFGSOfMyGradientbis_hxx <AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute.hxx>
#define Approx_ParLeastSquareOfMyGradientbis AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute
#define Approx_ParLeastSquareOfMyGradientbis_hxx <AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx>
#define Approx_ResConstraintOfMyGradientbis AppDef_ResConstraintOfMyGradientbisOfBSplineCompute
#define Approx_ResConstraintOfMyGradientbis_hxx <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#define Approx_ParFunctionOfMyGradientbis AppDef_ParFunctionOfMyGradientbisOfBSplineCompute
#define Approx_ParFunctionOfMyGradientbis_hxx <AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx>
#define Approx_Gradient_BFGSOfMyGradientbis AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute
#define Approx_Gradient_BFGSOfMyGradientbis_hxx <AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute.hxx>
#define Approx_BSplComputeLine AppDef_BSplineCompute
#define Approx_BSplComputeLine_hxx <AppDef_BSplineCompute.hxx>
#include <Approx_BSplComputeLine.gxx>

