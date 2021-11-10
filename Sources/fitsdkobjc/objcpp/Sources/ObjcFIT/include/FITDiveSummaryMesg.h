////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Garmin Canada Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2021 Garmin International, Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.67Release
// Tag = production/akw/21.67.00-0-gd790f76b
////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITDiveSummaryMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// ReferenceMesg 
- (BOOL)isReferenceMesgValid;
- (FITMesgNum)getReferenceMesg;
- (void)setReferenceMesg:(FITMesgNum)referenceMesg;
// ReferenceIndex 
- (BOOL)isReferenceIndexValid;
- (FITMessageIndex)getReferenceIndex;
- (void)setReferenceIndex:(FITMessageIndex)referenceIndex;
// AvgDepth 
- (BOOL)isAvgDepthValid;
- (FITFloat32)getAvgDepth;
- (void)setAvgDepth:(FITFloat32)avgDepth;
// MaxDepth 
- (BOOL)isMaxDepthValid;
- (FITFloat32)getMaxDepth;
- (void)setMaxDepth:(FITFloat32)maxDepth;
// SurfaceInterval 
- (BOOL)isSurfaceIntervalValid;
- (FITUInt32)getSurfaceInterval;
- (void)setSurfaceInterval:(FITUInt32)surfaceInterval;
// StartCns 
- (BOOL)isStartCnsValid;
- (FITUInt8)getStartCns;
- (void)setStartCns:(FITUInt8)startCns;
// EndCns 
- (BOOL)isEndCnsValid;
- (FITUInt8)getEndCns;
- (void)setEndCns:(FITUInt8)endCns;
// StartN2 
- (BOOL)isStartN2Valid;
- (FITUInt16)getStartN2;
- (void)setStartN2:(FITUInt16)startN2;
// EndN2 
- (BOOL)isEndN2Valid;
- (FITUInt16)getEndN2;
- (void)setEndN2:(FITUInt16)endN2;
// O2Toxicity 
- (BOOL)isO2ToxicityValid;
- (FITUInt16)getO2Toxicity;
- (void)setO2Toxicity:(FITUInt16)o2Toxicity;
// DiveNumber 
- (BOOL)isDiveNumberValid;
- (FITUInt32)getDiveNumber;
- (void)setDiveNumber:(FITUInt32)diveNumber;
// BottomTime 
- (BOOL)isBottomTimeValid;
- (FITFloat32)getBottomTime;
- (void)setBottomTime:(FITFloat32)bottomTime;
// AvgAscentRate 
- (BOOL)isAvgAscentRateValid;
- (FITFloat32)getAvgAscentRate;
- (void)setAvgAscentRate:(FITFloat32)avgAscentRate;
// AvgDescentRate 
- (BOOL)isAvgDescentRateValid;
- (FITFloat32)getAvgDescentRate;
- (void)setAvgDescentRate:(FITFloat32)avgDescentRate;
// MaxAscentRate 
- (BOOL)isMaxAscentRateValid;
- (FITFloat32)getMaxAscentRate;
- (void)setMaxAscentRate:(FITFloat32)maxAscentRate;
// MaxDescentRate 
- (BOOL)isMaxDescentRateValid;
- (FITFloat32)getMaxDescentRate;
- (void)setMaxDescentRate:(FITFloat32)maxDescentRate;
// HangTime 
- (BOOL)isHangTimeValid;
- (FITFloat32)getHangTime;
- (void)setHangTime:(FITFloat32)hangTime;

@end

NS_ASSUME_NONNULL_END