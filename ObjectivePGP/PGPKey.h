//
//  PGPKey.h
//  ObjectivePGP
//
//  Created by Marcin Krzyzanowski on 31/05/2017.
//  Copyright © 2017 Marcin Krzyżanowski. All rights reserved.
//

#import "PGPTypes.h"
#import "PGPPacket.h"
#import "PGPPartialKey.h"

#import "PGPExportableProtocol.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Single Public + Private key with the same ID.
@interface PGPKey : NSObject <PGPExportable>

PGP_EMPTY_INIT_UNAVAILABLE;

@property (nonatomic, nullable, readonly) PGPPartialKey *secretKey;
@property (nonatomic, nullable, readonly) PGPPartialKey *publicKey;

@property (nonatomic, nullable, readonly) PGPSecretKeyPacket *signingSecretKey;

- (instancetype)initWithSecretKey:(nullable PGPPartialKey *)secretKey publicKey:(nullable PGPPartialKey *)publicKey NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
