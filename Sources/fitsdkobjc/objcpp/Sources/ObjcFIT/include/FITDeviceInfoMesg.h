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

@interface FITDeviceInfoMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// DeviceIndex 
- (BOOL)isDeviceIndexValid;
- (FITDeviceIndex)getDeviceIndex;
- (void)setDeviceIndex:(FITDeviceIndex)deviceIndex;
// DeviceType 
- (BOOL)isDeviceTypeValid;
- (FITUInt8)getDeviceType;
- (void)setDeviceType:(FITUInt8)deviceType;
// DeviceType Sub Fields
- (BOOL)isAntplusDeviceTypeValid;
- (FITAntplusDeviceType) getAntplusDeviceType;
- (void)setAntplusDeviceType:(FITAntplusDeviceType)antplusDeviceType;
- (BOOL)isAntDeviceTypeValid;
- (FITUInt8) getAntDeviceType;
- (void)setAntDeviceType:(FITUInt8)antDeviceType;
// Manufacturer 
- (BOOL)isManufacturerValid;
- (FITManufacturer)getManufacturer;
- (void)setManufacturer:(FITManufacturer)manufacturer;
// SerialNumber 
- (BOOL)isSerialNumberValid;
- (FITUInt32z)getSerialNumber;
- (void)setSerialNumber:(FITUInt32z)serialNumber;
// Product 
- (BOOL)isProductValid;
- (FITUInt16)getProduct;
- (void)setProduct:(FITUInt16)product;
// Product Sub Fields
- (BOOL)isFaveroProductValid;
- (FITFaveroProduct) getFaveroProduct;
- (void)setFaveroProduct:(FITFaveroProduct)faveroProduct;
- (BOOL)isGarminProductValid;
- (FITGarminProduct) getGarminProduct;
- (void)setGarminProduct:(FITGarminProduct)garminProduct;
// SoftwareVersion 
- (BOOL)isSoftwareVersionValid;
- (FITFloat32)getSoftwareVersion;
- (void)setSoftwareVersion:(FITFloat32)softwareVersion;
// HardwareVersion 
- (BOOL)isHardwareVersionValid;
- (FITUInt8)getHardwareVersion;
- (void)setHardwareVersion:(FITUInt8)hardwareVersion;
// CumOperatingTime 
- (BOOL)isCumOperatingTimeValid;
- (FITUInt32)getCumOperatingTime;
- (void)setCumOperatingTime:(FITUInt32)cumOperatingTime;
// BatteryVoltage 
- (BOOL)isBatteryVoltageValid;
- (FITFloat32)getBatteryVoltage;
- (void)setBatteryVoltage:(FITFloat32)batteryVoltage;
// BatteryStatus 
- (BOOL)isBatteryStatusValid;
- (FITBatteryStatus)getBatteryStatus;
- (void)setBatteryStatus:(FITBatteryStatus)batteryStatus;
// SensorPosition 
- (BOOL)isSensorPositionValid;
- (FITBodyLocation)getSensorPosition;
- (void)setSensorPosition:(FITBodyLocation)sensorPosition;
// Descriptor 
- (BOOL)isDescriptorValid;
- (NSString *)getDescriptor;
- (void)setDescriptor:(NSString *)descriptor;
// AntTransmissionType 
- (BOOL)isAntTransmissionTypeValid;
- (FITUInt8z)getAntTransmissionType;
- (void)setAntTransmissionType:(FITUInt8z)antTransmissionType;
// AntDeviceNumber 
- (BOOL)isAntDeviceNumberValid;
- (FITUInt16z)getAntDeviceNumber;
- (void)setAntDeviceNumber:(FITUInt16z)antDeviceNumber;
// AntNetwork 
- (BOOL)isAntNetworkValid;
- (FITAntNetwork)getAntNetwork;
- (void)setAntNetwork:(FITAntNetwork)antNetwork;
// SourceType 
- (BOOL)isSourceTypeValid;
- (FITSourceType)getSourceType;
- (void)setSourceType:(FITSourceType)sourceType;
// ProductName 
- (BOOL)isProductNameValid;
- (NSString *)getProductName;
- (void)setProductName:(NSString *)productName;

@end

NS_ASSUME_NONNULL_END