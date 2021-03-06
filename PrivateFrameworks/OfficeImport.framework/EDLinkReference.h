/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDLinkReference : NSObject {
    unsigned int  mFirstSheetIndex;
    unsigned int  mLastSheetIndex;
    unsigned int  mLinkIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned int)arg1 firstSheetIndex:(unsigned int)arg2 lastSheetIndex:(unsigned int)arg3;

- (id)description;
- (unsigned int)firstSheetIndex;
- (unsigned int)hash;
- (id)init;
- (id)initWithLinkIndex:(unsigned int)arg1 firstSheetIndex:(unsigned int)arg2 lastSheetIndex:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLinkReference:(id)arg1;
- (bool)isWorkbookLevelReference;
- (unsigned int)lastSheetIndex;
- (unsigned int)linkIndex;
- (void)setFirstSheetIndex:(unsigned int)arg1;
- (void)setLastSheetIndex:(unsigned int)arg1;
- (void)setLinkIndex:(unsigned int)arg1;

@end
