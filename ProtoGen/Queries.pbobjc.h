// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: queries.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class AccountDetailPaginationMeta;
@class AccountDetailRecordId;
@class AssetPaginationMeta;
@class GetAccount;
@class GetAccountAssetTransactions;
@class GetAccountAssets;
@class GetAccountDetail;
@class GetAccountTransactions;
@class GetAssetInfo;
@class GetBlock;
@class GetPeers;
@class GetPendingTransactions;
@class GetRolePermissions;
@class GetRoles;
@class GetSignatories;
@class GetTransactions;
@class QueryPayloadMeta;
@class Query_Payload;
@class Signature;
@class TxPaginationMeta;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - QueriesRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface QueriesRoot : GPBRootObject
@end

#pragma mark - TxPaginationMeta

typedef GPB_ENUM(TxPaginationMeta_FieldNumber) {
  TxPaginationMeta_FieldNumber_PageSize = 1,
  TxPaginationMeta_FieldNumber_FirstTxHash = 2,
};

typedef GPB_ENUM(TxPaginationMeta_OptFirstTxHash_OneOfCase) {
  TxPaginationMeta_OptFirstTxHash_OneOfCase_GPBUnsetOneOfCase = 0,
  TxPaginationMeta_OptFirstTxHash_OneOfCase_FirstTxHash = 2,
};

@interface TxPaginationMeta : GPBMessage

@property(nonatomic, readwrite) uint32_t pageSize;

@property(nonatomic, readonly) TxPaginationMeta_OptFirstTxHash_OneOfCase optFirstTxHashOneOfCase;

@property(nonatomic, readwrite, copy, null_resettable) NSString *firstTxHash;

@end

/**
 * Clears whatever value was set for the oneof 'optFirstTxHash'.
 **/
void TxPaginationMeta_ClearOptFirstTxHashOneOfCase(TxPaginationMeta *message);

#pragma mark - AssetPaginationMeta

typedef GPB_ENUM(AssetPaginationMeta_FieldNumber) {
  AssetPaginationMeta_FieldNumber_PageSize = 1,
  AssetPaginationMeta_FieldNumber_FirstAssetId = 2,
};

typedef GPB_ENUM(AssetPaginationMeta_OptFirstAssetId_OneOfCase) {
  AssetPaginationMeta_OptFirstAssetId_OneOfCase_GPBUnsetOneOfCase = 0,
  AssetPaginationMeta_OptFirstAssetId_OneOfCase_FirstAssetId = 2,
};

@interface AssetPaginationMeta : GPBMessage

@property(nonatomic, readwrite) uint32_t pageSize;

@property(nonatomic, readonly) AssetPaginationMeta_OptFirstAssetId_OneOfCase optFirstAssetIdOneOfCase;

@property(nonatomic, readwrite, copy, null_resettable) NSString *firstAssetId;

@end

/**
 * Clears whatever value was set for the oneof 'optFirstAssetId'.
 **/
void AssetPaginationMeta_ClearOptFirstAssetIdOneOfCase(AssetPaginationMeta *message);

#pragma mark - GetAccount

typedef GPB_ENUM(GetAccount_FieldNumber) {
  GetAccount_FieldNumber_AccountId = 1,
};

@interface GetAccount : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *accountId;

@end

#pragma mark - GetBlock

typedef GPB_ENUM(GetBlock_FieldNumber) {
  GetBlock_FieldNumber_Height = 1,
};

@interface GetBlock : GPBMessage

@property(nonatomic, readwrite) uint64_t height;

@end

#pragma mark - GetSignatories

typedef GPB_ENUM(GetSignatories_FieldNumber) {
  GetSignatories_FieldNumber_AccountId = 1,
};

@interface GetSignatories : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *accountId;

@end

#pragma mark - GetAccountTransactions

typedef GPB_ENUM(GetAccountTransactions_FieldNumber) {
  GetAccountTransactions_FieldNumber_AccountId = 1,
  GetAccountTransactions_FieldNumber_PaginationMeta = 2,
};

@interface GetAccountTransactions : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *accountId;

@property(nonatomic, readwrite, strong, null_resettable) TxPaginationMeta *paginationMeta;
/** Test to see if @c paginationMeta has been set. */
@property(nonatomic, readwrite) BOOL hasPaginationMeta;

@end

#pragma mark - GetAccountAssetTransactions

typedef GPB_ENUM(GetAccountAssetTransactions_FieldNumber) {
  GetAccountAssetTransactions_FieldNumber_AccountId = 1,
  GetAccountAssetTransactions_FieldNumber_AssetId = 2,
  GetAccountAssetTransactions_FieldNumber_PaginationMeta = 3,
};

@interface GetAccountAssetTransactions : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *accountId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *assetId;

@property(nonatomic, readwrite, strong, null_resettable) TxPaginationMeta *paginationMeta;
/** Test to see if @c paginationMeta has been set. */
@property(nonatomic, readwrite) BOOL hasPaginationMeta;

@end

#pragma mark - GetTransactions

typedef GPB_ENUM(GetTransactions_FieldNumber) {
  GetTransactions_FieldNumber_TxHashesArray = 1,
};

@interface GetTransactions : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString *> *txHashesArray;
/** The number of items in @c txHashesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger txHashesArray_Count;

@end

#pragma mark - GetAccountAssets

typedef GPB_ENUM(GetAccountAssets_FieldNumber) {
  GetAccountAssets_FieldNumber_AccountId = 1,
  GetAccountAssets_FieldNumber_PaginationMeta = 2,
};

@interface GetAccountAssets : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *accountId;

@property(nonatomic, readwrite, strong, null_resettable) AssetPaginationMeta *paginationMeta;
/** Test to see if @c paginationMeta has been set. */
@property(nonatomic, readwrite) BOOL hasPaginationMeta;

@end

#pragma mark - AccountDetailPaginationMeta

typedef GPB_ENUM(AccountDetailPaginationMeta_FieldNumber) {
  AccountDetailPaginationMeta_FieldNumber_PageSize = 1,
  AccountDetailPaginationMeta_FieldNumber_FirstRecordId = 2,
};

@interface AccountDetailPaginationMeta : GPBMessage

@property(nonatomic, readwrite) uint32_t pageSize;

@property(nonatomic, readwrite, strong, null_resettable) AccountDetailRecordId *firstRecordId;
/** Test to see if @c firstRecordId has been set. */
@property(nonatomic, readwrite) BOOL hasFirstRecordId;

@end

#pragma mark - GetAccountDetail

typedef GPB_ENUM(GetAccountDetail_FieldNumber) {
  GetAccountDetail_FieldNumber_AccountId = 1,
  GetAccountDetail_FieldNumber_Key = 2,
  GetAccountDetail_FieldNumber_Writer = 3,
  GetAccountDetail_FieldNumber_PaginationMeta = 4,
};

typedef GPB_ENUM(GetAccountDetail_OptAccountId_OneOfCase) {
  GetAccountDetail_OptAccountId_OneOfCase_GPBUnsetOneOfCase = 0,
  GetAccountDetail_OptAccountId_OneOfCase_AccountId = 1,
};

typedef GPB_ENUM(GetAccountDetail_OptKey_OneOfCase) {
  GetAccountDetail_OptKey_OneOfCase_GPBUnsetOneOfCase = 0,
  GetAccountDetail_OptKey_OneOfCase_Key = 2,
};

typedef GPB_ENUM(GetAccountDetail_OptWriter_OneOfCase) {
  GetAccountDetail_OptWriter_OneOfCase_GPBUnsetOneOfCase = 0,
  GetAccountDetail_OptWriter_OneOfCase_Writer = 3,
};

@interface GetAccountDetail : GPBMessage

@property(nonatomic, readonly) GetAccountDetail_OptAccountId_OneOfCase optAccountIdOneOfCase;

@property(nonatomic, readwrite, copy, null_resettable) NSString *accountId;

@property(nonatomic, readonly) GetAccountDetail_OptKey_OneOfCase optKeyOneOfCase;

@property(nonatomic, readwrite, copy, null_resettable) NSString *key;

@property(nonatomic, readonly) GetAccountDetail_OptWriter_OneOfCase optWriterOneOfCase;

@property(nonatomic, readwrite, copy, null_resettable) NSString *writer;

@property(nonatomic, readwrite, strong, null_resettable) AccountDetailPaginationMeta *paginationMeta;
/** Test to see if @c paginationMeta has been set. */
@property(nonatomic, readwrite) BOOL hasPaginationMeta;

@end

/**
 * Clears whatever value was set for the oneof 'optAccountId'.
 **/
void GetAccountDetail_ClearOptAccountIdOneOfCase(GetAccountDetail *message);
/**
 * Clears whatever value was set for the oneof 'optKey'.
 **/
void GetAccountDetail_ClearOptKeyOneOfCase(GetAccountDetail *message);
/**
 * Clears whatever value was set for the oneof 'optWriter'.
 **/
void GetAccountDetail_ClearOptWriterOneOfCase(GetAccountDetail *message);

#pragma mark - GetAssetInfo

typedef GPB_ENUM(GetAssetInfo_FieldNumber) {
  GetAssetInfo_FieldNumber_AssetId = 1,
};

@interface GetAssetInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *assetId;

@end

#pragma mark - GetRoles

@interface GetRoles : GPBMessage

@end

#pragma mark - GetRolePermissions

typedef GPB_ENUM(GetRolePermissions_FieldNumber) {
  GetRolePermissions_FieldNumber_RoleId = 1,
};

@interface GetRolePermissions : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *roleId;

@end

#pragma mark - GetPendingTransactions

typedef GPB_ENUM(GetPendingTransactions_FieldNumber) {
  GetPendingTransactions_FieldNumber_PaginationMeta = 1,
};

@interface GetPendingTransactions : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) TxPaginationMeta *paginationMeta;
/** Test to see if @c paginationMeta has been set. */
@property(nonatomic, readwrite) BOOL hasPaginationMeta;

@end

#pragma mark - GetPeers

@interface GetPeers : GPBMessage

@end

#pragma mark - QueryPayloadMeta

typedef GPB_ENUM(QueryPayloadMeta_FieldNumber) {
  QueryPayloadMeta_FieldNumber_CreatedTime = 1,
  QueryPayloadMeta_FieldNumber_CreatorAccountId = 2,
  QueryPayloadMeta_FieldNumber_QueryCounter = 3,
};

@interface QueryPayloadMeta : GPBMessage

@property(nonatomic, readwrite) uint64_t createdTime;

@property(nonatomic, readwrite, copy, null_resettable) NSString *creatorAccountId;

/** used to prevent replay attacks. */
@property(nonatomic, readwrite) uint64_t queryCounter;

@end

#pragma mark - Query

typedef GPB_ENUM(Query_FieldNumber) {
  Query_FieldNumber_Payload = 1,
  Query_FieldNumber_Signature = 2,
};

@interface Query : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Query_Payload *payload;
/** Test to see if @c payload has been set. */
@property(nonatomic, readwrite) BOOL hasPayload;

@property(nonatomic, readwrite, strong, null_resettable) Signature *signature;
/** Test to see if @c signature has been set. */
@property(nonatomic, readwrite) BOOL hasSignature;

@end

#pragma mark - Query_Payload

typedef GPB_ENUM(Query_Payload_FieldNumber) {
  Query_Payload_FieldNumber_Meta = 1,
  Query_Payload_FieldNumber_GetAccount = 3,
  Query_Payload_FieldNumber_GetSignatories = 4,
  Query_Payload_FieldNumber_GetAccountTransactions = 5,
  Query_Payload_FieldNumber_GetAccountAssetTransactions = 6,
  Query_Payload_FieldNumber_GetTransactions = 7,
  Query_Payload_FieldNumber_GetAccountAssets = 8,
  Query_Payload_FieldNumber_GetAccountDetail = 9,
  Query_Payload_FieldNumber_GetRoles = 10,
  Query_Payload_FieldNumber_GetRolePermissions = 11,
  Query_Payload_FieldNumber_GetAssetInfo = 12,
  Query_Payload_FieldNumber_GetPendingTransactions = 13,
  Query_Payload_FieldNumber_GetBlock = 14,
  Query_Payload_FieldNumber_GetPeers = 15,
};

typedef GPB_ENUM(Query_Payload_Query_OneOfCase) {
  Query_Payload_Query_OneOfCase_GPBUnsetOneOfCase = 0,
  Query_Payload_Query_OneOfCase_GetAccount = 3,
  Query_Payload_Query_OneOfCase_GetSignatories = 4,
  Query_Payload_Query_OneOfCase_GetAccountTransactions = 5,
  Query_Payload_Query_OneOfCase_GetAccountAssetTransactions = 6,
  Query_Payload_Query_OneOfCase_GetTransactions = 7,
  Query_Payload_Query_OneOfCase_GetAccountAssets = 8,
  Query_Payload_Query_OneOfCase_GetAccountDetail = 9,
  Query_Payload_Query_OneOfCase_GetRoles = 10,
  Query_Payload_Query_OneOfCase_GetRolePermissions = 11,
  Query_Payload_Query_OneOfCase_GetAssetInfo = 12,
  Query_Payload_Query_OneOfCase_GetPendingTransactions = 13,
  Query_Payload_Query_OneOfCase_GetBlock = 14,
  Query_Payload_Query_OneOfCase_GetPeers = 15,
};

@interface Query_Payload : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) QueryPayloadMeta *meta;
/** Test to see if @c meta has been set. */
@property(nonatomic, readwrite) BOOL hasMeta;

@property(nonatomic, readonly) Query_Payload_Query_OneOfCase queryOneOfCase;

@property(nonatomic, readwrite, strong, null_resettable) GetAccount *getAccount;

@property(nonatomic, readwrite, strong, null_resettable) GetSignatories *getSignatories;

@property(nonatomic, readwrite, strong, null_resettable) GetAccountTransactions *getAccountTransactions;

@property(nonatomic, readwrite, strong, null_resettable) GetAccountAssetTransactions *getAccountAssetTransactions;

@property(nonatomic, readwrite, strong, null_resettable) GetTransactions *getTransactions;

@property(nonatomic, readwrite, strong, null_resettable) GetAccountAssets *getAccountAssets;

@property(nonatomic, readwrite, strong, null_resettable) GetAccountDetail *getAccountDetail;

@property(nonatomic, readwrite, strong, null_resettable) GetRoles *getRoles;

@property(nonatomic, readwrite, strong, null_resettable) GetRolePermissions *getRolePermissions;

@property(nonatomic, readwrite, strong, null_resettable) GetAssetInfo *getAssetInfo;

@property(nonatomic, readwrite, strong, null_resettable) GetPendingTransactions *getPendingTransactions;

@property(nonatomic, readwrite, strong, null_resettable) GetBlock *getBlock;

@property(nonatomic, readwrite, strong, null_resettable) GetPeers *getPeers;

@end

/**
 * Clears whatever value was set for the oneof 'query'.
 **/
void Query_Payload_ClearQueryOneOfCase(Query_Payload *message);

#pragma mark - BlocksQuery

typedef GPB_ENUM(BlocksQuery_FieldNumber) {
  BlocksQuery_FieldNumber_Meta = 1,
  BlocksQuery_FieldNumber_Signature = 2,
};

@interface BlocksQuery : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) QueryPayloadMeta *meta;
/** Test to see if @c meta has been set. */
@property(nonatomic, readwrite) BOOL hasMeta;

@property(nonatomic, readwrite, strong, null_resettable) Signature *signature;
/** Test to see if @c signature has been set. */
@property(nonatomic, readwrite) BOOL hasSignature;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
