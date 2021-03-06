## Implementing a schematic rule and its property page

  <div xmlns="http://www.w3.org/1999/xhtml" xmlns:my="http://schemas.microsoft.com/office/infopath/2003/myXSD/2006-02-10T23:25:53">Schematic rules are executed during schematic diagram generation and update. Several schematic rules are provided with this version, <font face="Verdana">for example, </font>the Node Reduction By Priority rule, Relationship rule, and so on. You can also develop your own custom schematic rule. Schematics treats this custom rule the same as the standard rules. To create a custom rule, implement new ISchematicRule and ISchematicRuleDesign interfaces. To create the associated property page, implement the IComPropertyPage interface. </div>
  <div xmlns="http://www.w3.org/1999/xhtml" xmlns:my="http://schemas.microsoft.com/office/infopath/2003/myXSD/2006-02-10T23:25:53">
    <span style="FONT-SIZE: 10pt">
      ****
    </span> </div>
  <div style="LINE-HEIGHT: 12pt; MARGIN-TOP: 0in; PADDING-RIGHT: 0in; MARGIN-BOTTOM: 0pt; FONT-SIZE: 10pt" xmlns="http://www.w3.org/1999/xhtml" xmlns:my="http://schemas.microsoft.com/office/infopath/2003/myXSD/2006-02-10T23:25:53">
    <span style="FONT-SIZE: 10pt">
      **Caution:** If you plan to implement a custom schematic rule to be executed via a client-server application, the solution must implement two projects; one for the custom rule property page and the other for the custom rule execution itself. The component dedicated to the custom rule execution will have to be registered with the ArcGIS server to be used on any client-server application.</span>
  </div>
  <div style="LINE-HEIGHT: 12pt; MARGIN-TOP: 0in; PADDING-RIGHT: 0in; MARGIN-BOTTOM: 0pt; FONT-SIZE: 10pt" xmlns="http://www.w3.org/1999/xhtml" xmlns:my="http://schemas.microsoft.com/office/infopath/2003/myXSD/2006-02-10T23:25:53">
    <span style="FONT-SIZE: 10pt"></span> </div>
  <div xmlns="http://www.w3.org/1999/xhtml" xmlns:my="http://schemas.microsoft.com/office/infopath/2003/myXSD/2006-02-10T23:25:53">This sample details a customized schematic rule implementation. The goal of this sample is not in the rule, but how to implement it. The purpose is to create a schematic rule (in this sample, Reduce Schematic Links) that reduces schematic links, implemented by a specific schematic feature class, when two or more links have the same extremity nodes (and optionally, connect at the same port on these extremity nodes).</div>  


<!-- TODO: Fill this section below with metadata about this sample-->
```
Language:              C#, VB
Subject:               Schematics
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
1. Open the solution file and build the project. Note that this step is automatically registering the components.  
1. Start ArcCatalog.  
1. Browse to any geodatabase that contains a schematic dataset.  
1. Right-click this schematic dataset entry and select Edit. The Schematic Dataset Editor starts.  
1. Select any diagram template entry that works with the Standard builder or create a diagram template that works with the Standard builder.  
1. Click the Rules tab.  
1. Click Add Rule on the Rules tab toolbar.  
1. Select the new custom rule from the Type drop-down list (that is, select Reduction Link Rule VBNet or Reduction Link Rule C#).  
1. Click Rule Properties on the Rules tab toolbar. The custom rule properties page appears.  
1. Select the link schematic feature class (that implements the schematic links that will be automatically reduced during the rule execution) in the Link to reduce drop-down list.  
1. Select the Use Port check box if your schematic links connect to a specific port at their extremity nodes and you want the rule to take these port connections into account during its execution.  
1. Click Save to save the schematic dataset's new parameters.  
1. Start ArcMap and generate or update a schematic diagram from the diagram template (which definition has been just modified); the custom rule will be executed.  







#### See Also  
[ISchematicRule interface](http://desktop.arcgis.com/search/?q=ISchematicRule%20interface&p=0&language=en&product=arcobjects-sdk-dotnet&version=&n=15&collection=help)  
[ISchematicRuleDesign interface](http://desktop.arcgis.com/search/?q=ISchematicRuleDesign%20interface&p=0&language=en&product=arcobjects-sdk-dotnet&version=&n=15&collection=help)  


---------------------------------

#### Licensing  
| Development licensing | Deployment licensing | 
| ------------- | ------------- | 
| ArcGIS Desktop Basic: Schematics | ArcGIS Desktop Basic: Schematics |  
| ArcGIS Desktop Standard: Schematics | ArcGIS Desktop Standard: Schematics |  
| ArcGIS Desktop Advanced: Schematics | ArcGIS Desktop Advanced: Schematics |  


