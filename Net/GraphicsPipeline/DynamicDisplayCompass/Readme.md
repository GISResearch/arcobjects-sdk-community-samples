## Dynamic display compass

  <div xmlns="http://www.w3.org/1999/xhtml" xmlns:my="http://schemas.microsoft.com/office/infopath/2003/myXSD/2006-02-10T23:25:53">This sample demonstrates drawing on the map in dynamic mode using an OpenGL application programming interface (API). A command is implemented that adds a compass object to the map, which rotates along together with the dynamic map. The following issues are covered in this sample: </div>

*   Wiring dynamic map events to listen to the Before or After DynamicDraw, which allows you to plug in your drawing to the map.
*   Creation of OpenGL display lists.
*   Mapping a bitmap into an OpenGL texture and binding the texture to an OpenGL geometry.
*   Translating, scaling, and rotating OpenGL display lists.   


<!-- TODO: Fill this section below with metadata about this sample-->
```
Language:              C#
Subject:               Graphics Pipeline
Organization:          Esri, http://www.esri.com
Date:                  11/17/2017
ArcObjects SDK:        10.6
Visual Studio:         2015, 2017
.NET Target Framework: 4.5
```

### Resources

* [ArcObjects .NET API Reference online](http://desktop.arcgis.com/en/arcobjects/latest/net/webframe.htm)  
* [Sample Data Download](../../releases)  
* [What's new](http://desktop.arcgis.com/en/arcobjects/latest/net/webframe.htm#91cabc68-2271-400a-8ff9-c7fb25108546.htm)  
* [Download the ArcObjects SDK for .Net from MyEsri.com](https://my.esri.com/)  

### Usage
1. Start Visual Studio and open the solution.  
1. Build the solution to make the Dynamic Display Compass command .dll file. Use this command in an application with a MapControl and a ToolbarControl, such as the MapControlApplication template included with the Visual Studio integration.  
1. Add the command to the ToolbarControl. The command can be found in the .NET Samples category with the name, Dynamic Display Compass.  
1. Run the application and click the Dynamic Display Compass command to add the compass object to the map. The map switches into dynamic mode and adds the compass to the map. The compass rotates with the map when rotated.  







#### See Also  
[How dynamic display works](http://desktop.arcgis.com/search/?q=How%20dynamic%20display%20works&p=0&language=en&product=arcobjects-sdk-dotnet&version=&n=15&collection=help)  
[Rendering dynamic map content](http://desktop.arcgis.com/search/?q=Rendering%20dynamic%20map%20content&p=0&language=en&product=arcobjects-sdk-dotnet&version=&n=15&collection=help)  
[How to create a dynamic glyph from a marker symbol](http://desktop.arcgis.com/search/?q=How%20to%20create%20a%20dynamic%20glyph%20from%20a%20marker%20symbol&p=0&language=en&product=arcobjects-sdk-dotnet&version=&n=15&collection=help)  
[How to plug in dynamic drawing](http://desktop.arcgis.com/search/?q=How%20to%20plug%20in%20dynamic%20drawing&p=0&language=en&product=arcobjects-sdk-dotnet&version=&n=15&collection=help)  
[Limitations for dynamic display](http://desktop.arcgis.com/search/?q=Limitations%20for%20dynamic%20display&p=0&language=en&product=arcobjects-sdk-dotnet&version=&n=15&collection=help)  
[Sample: Dynamic display—tracking dynamic object](../../../Net/GraphicsPipeline/DynamicObjectTracking)  
[Sample: Dynamic display layer](../../../Net/GraphicsPipeline/MyDynamicLayer)  
[Sample: Dynamic heads up display](../../../Net/GraphicsPipeline/DynamicDisplayHUD)  


---------------------------------

#### Licensing  
| Development licensing | Deployment licensing | 
| ------------- | ------------- | 
| Engine Developer Kit | Engine |  
|  | ArcGIS Desktop Basic |  
|  | ArcGIS Desktop Standard |  
|  | ArcGIS Desktop Advanced |  


