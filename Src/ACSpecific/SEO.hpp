#ifndef _SEO_HPP
#define _SEO_HPP

#include	"../APIEnvir.h"
#include	"ACAPinc.h"					// also includes APIdefs.h
#include	"../APICommon.h"

#if ACVER == 27
//#include	"ACAPI_MigrationHeader.hpp"
#include	"..\..\CPPCommonLibs\AC27.hpp"
#endif

bool BoundingBoxesMatch(const API_Element& element1, const API_Element& element2);

GS::HashSet<API_Guid> GetSEOElements(bool isBoundingBoxConsidered = false);

#endif	//_SEO_HPP