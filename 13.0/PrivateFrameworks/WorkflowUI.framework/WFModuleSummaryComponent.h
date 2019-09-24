//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKStatefulViewComponent.h>

@class NSDictionary, NSSet, NSString;
@protocol WFComponentNavigationContext, WFModuleParameterStateWriter, WFVariableProvider, WFVariableUIDelegate;

@interface WFModuleSummaryComponent : CKStatefulViewComponent
{
    _Bool _processing;
    _Bool _extendSlotBackgroundOffEdges;
    NSString *_summaryFormatString;
    NSSet *_parameters;
    NSSet *_editableParameters;
    NSDictionary *_parameterStates;
    NSDictionary *_stagedParameterStates;
    id <WFModuleParameterStateWriter> _stateWriter;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
    NSString *_firstResponderParameterKey;
    double _horizontalPadding;
    long long _textAlignment;
}

+ (id)newWithSummaryFormatString:(id)arg1 parameters:(id)arg2 editableParameters:(id)arg3 parameterStates:(id)arg4 processing:(_Bool)arg5 stateWriter:(id)arg6 variableProvider:(id)arg7 variableUIDelegate:(id)arg8 navigationContext:(id)arg9 firstResponderParameterKey:(id)arg10 horizontalPadding:(double)arg11 textAlignment:(long long)arg12 extendSlotBackgroundOffEdges:(_Bool)arg13;
@property(readonly, nonatomic) _Bool extendSlotBackgroundOffEdges; // @synthesize extendSlotBackgroundOffEdges=_extendSlotBackgroundOffEdges;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(readonly, nonatomic) NSString *firstResponderParameterKey; // @synthesize firstResponderParameterKey=_firstResponderParameterKey;
@property(readonly, nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(readonly, nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(readonly, nonatomic) __weak id <WFModuleParameterStateWriter> stateWriter; // @synthesize stateWriter=_stateWriter;
@property(readonly, nonatomic) _Bool processing; // @synthesize processing=_processing;
@property(readonly, copy, nonatomic) NSDictionary *stagedParameterStates; // @synthesize stagedParameterStates=_stagedParameterStates;
@property(readonly, copy, nonatomic) NSDictionary *parameterStates; // @synthesize parameterStates=_parameterStates;
@property(readonly, copy, nonatomic) NSSet *editableParameters; // @synthesize editableParameters=_editableParameters;
@property(readonly, copy, nonatomic) NSSet *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *summaryFormatString; // @synthesize summaryFormatString=_summaryFormatString;
- (void).cxx_destruct;
- (void)reflowWithStagedParameterStates:(id)arg1;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
