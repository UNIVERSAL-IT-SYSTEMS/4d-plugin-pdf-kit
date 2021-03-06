/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : PDF Kit
 #	author : miyako
 #	2015/09/24
 #
 # --------------------------------------------------------------------------------*/

#import <Quartz/Quartz.h>

// --- Page
void PDF_Count_pages(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_GET_PAGE(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_SET_PAGE_ROTATION(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_REMOVE_PAGE(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_EXCHANGE_PAGES(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_INSERT_PAGES(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_GET_PAGE_ANNOTATION(sLONG_PTR *pResult, PackagePtr pParams);

//El Capitan
void PDF_SET_PAGE_ROTATION2(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_REMOVE_PAGE2(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_GET_PAGE2(sLONG_PTR *pResult, PackagePtr pParams);

// --- Picture
void PDF_Data_from_picture(sLONG_PTR *pResult, PackagePtr pParams);

// --- Document
void PDF_GET_DOCUMENT_ATTRIBUTES(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_SET_DOCUMENT_ATTRIBUTES(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_Get_document_version(sLONG_PTR *pResult, PackagePtr pParams);
void PDF_Get_document_text(sLONG_PTR *pResult, PackagePtr pParams);
