/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
#import <vmutils/ImageSymbols.h>
#import <vmutils/TaskMemoryCache.h>
#import <vmutils/CDStructures.h>

@interface NSSampler : NSObject
{
    BOOL _stop;	// 4 = 0x4
    BOOL _stopped;	// 5 = 0x5
    unsigned int _task;	// 8 = 0x8
    int _pid;	// 12 = 0xc
    double _duration;	// 16 = 0x10
    double _interval;	// 24 = 0x18
    NSMutableArray *_sampleData;	// 32 = 0x20
    NSMutableArray *_sampleTimes;	// 36 = 0x24
    double _previousTime;	// 40 = 0x28
    unsigned int _numberOfDataPoints;	// 48 = 0x30
    double _sigma;	// 52 = 0x34
    double _max;	// 60 = 0x3c
    unsigned int _sampleNumberForMax;	// 68 = 0x44
    ImageSymbols *_imageSymbols;	// 72 = 0x48
    NSDictionary *_symbolRichBinaryMappings;	// 76 = 0x4c
    BOOL _writeBadAddresses;	// 80 = 0x50
    TaskMemoryCache *_tmc;	// 84 = 0x54
    BOOL _stacksFixed;	// 88 = 0x58
    BOOL _sampleSelf;	// 89 = 0x59
    struct backtraceMagicNumbers _magicNumbers;	// 92 = 0x5c
}

- (void)_cleanupStacks;	// IMP=0x318ac100
- (void)_initStatistics;	// IMP=0x318abc84
- (void)_makeHighPriority;	// IMP=0x318ab4e4
- (void)_makeTimeshare;	// IMP=0x318ab4e8
- (void)_runSampleThread:(id)fp8;	// IMP=0x318ab8b4
- (void)dealloc;	// IMP=0x318abcf0
- (void)finalize;	// IMP=0x318abd7c
- (void)forceStop;	// IMP=0x318acbcc
- (void)getStatistics:(struct samplingStatistics *)fp8;	// IMP=0x318acbd8
- (id)imageSymbols;	// IMP=0x318ac020
- (id)initWithPid:(int)fp8;	// IMP=0x318abdf0
- (id)initWithPid:(int)fp8 symbolRichBinaries:(id)fp12;	// IMP=0x318abfb8
- (id)initWithSelf;	// IMP=0x318abdbc
- (void)preloadSymbols;	// IMP=0x318acb88
- (void)printStatistics;	// IMP=0x318aca64
- (id)rawBacktraces;	// IMP=0x318ac2bc
- (void)sampleForDuration2:(double)fp8 interval:(double)fp16;	// IMP=0x318ac9dc
- (void)sampleForDuration:(unsigned int)fp8 interval:(unsigned int)fp12;	// IMP=0x318ac94c
- (int)sampleTask;	// IMP=0x318ab534
- (void)setImageSymbols:(id)fp8;	// IMP=0x318abfe0
- (void)startSamplingWithInterval:(unsigned int)fp8;	// IMP=0x318ac078
- (void)stopSampling;	// IMP=0x318ac2c4
- (id)stopSamplingAndReturnCallNode;	// IMP=0x318ac19c
- (void)writeBozo;	// IMP=0x318ac300
- (void)writeOutput:(id)fp8 append:(BOOL)fp12;	// IMP=0x318ac3f8

@end

