/*

   Copyright 2016 Esri

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

   See the License for the specific language governing permissions and
   limitations under the License.

*/
// Copyright 2015 ESRI
// 
// All rights reserved under the copyright laws of the United States
// and applicable international laws, treaties, and conventions.
// 
// You may freely redistribute and use this sample code, with or
// without modification, provided you include the original copyright
// notice and use restrictions.
// 
// See the use restrictions at <your ArcGIS install location>/DeveloperKit10.3/userestrictions.txt.
// 


#ifndef __PATHUTILITIES_ESRISCENARIO_H__
#define __PATHUTILITIES_ESRISCENARIO_H__

// Extract the shape file name from the full path of the file
HRESULT GetFileFromFullPath(const char* inFullPath, BSTR* outFileName);

// Remove the file name from the full path and return the directory
HRESULT GetParentDirFromFullPath(const char* inFullPath, BSTR* outFilePath);

#endif  // __PATHUTILITIES_ESRISCENARIO_H__
 
