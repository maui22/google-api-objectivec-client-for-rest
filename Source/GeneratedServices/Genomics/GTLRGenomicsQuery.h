// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Genomics API (genomics/v1)
// Description:
//   Uploads, processes, queries, and searches Genomics data in the cloud.
// Documentation:
//   https://cloud.google.com/genomics

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRGenomics_CancelOperationRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Genomics query classes.
 */
@interface GTLRGenomicsQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation.
 *  The server makes a best effort to cancel the operation, but success is not
 *  guaranteed. Clients may use Operations.GetOperation
 *  or Operations.ListOperations
 *  to check whether the cancellation succeeded or the operation completed
 *  despite cancellation.
 *  Authorization requires the following [Google
 *  IAM](https://cloud.google.com/iam) permission&#58;
 *  * `genomics.operations.cancel`
 *
 *  Method: genomics.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGenomics
 *    @c kGTLRAuthScopeGenomicsCloudPlatform
 */
@interface GTLRGenomicsQuery_OperationsCancel : GTLRGenomicsQuery
// Previous library name was
//   +[GTLQueryGenomics queryForOperationsCancelWithObject:name:]

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRGenomics_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation.
 *  The server makes a best effort to cancel the operation, but success is not
 *  guaranteed. Clients may use Operations.GetOperation
 *  or Operations.ListOperations
 *  to check whether the cancellation succeeded or the operation completed
 *  despite cancellation.
 *  Authorization requires the following [Google
 *  IAM](https://cloud.google.com/iam) permission&#58;
 *  * `genomics.operations.cancel`
 *
 *  @param object The @c GTLRGenomics_CancelOperationRequest to include in the
 *    query.
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @return GTLRGenomicsQuery_OperationsCancel
 */
+ (instancetype)queryWithObject:(GTLRGenomics_CancelOperationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation.
 *  Clients can use this method to poll the operation result at intervals as
 *  recommended by the API service.
 *  Authorization requires the following [Google
 *  IAM](https://cloud.google.com/iam) permission&#58;
 *  * `genomics.operations.get`
 *
 *  Method: genomics.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGenomics
 *    @c kGTLRAuthScopeGenomicsCloudPlatform
 */
@interface GTLRGenomicsQuery_OperationsGet : GTLRGenomicsQuery
// Previous library name was
//   +[GTLQueryGenomics queryForOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRGenomics_Operation.
 *
 *  Gets the latest state of a long-running operation.
 *  Clients can use this method to poll the operation result at intervals as
 *  recommended by the API service.
 *  Authorization requires the following [Google
 *  IAM](https://cloud.google.com/iam) permission&#58;
 *  * `genomics.operations.get`
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRGenomicsQuery_OperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request.
 *  Authorization requires the following [Google
 *  IAM](https://cloud.google.com/iam) permission&#58;
 *  * `genomics.operations.list`
 *
 *  Method: genomics.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGenomics
 *    @c kGTLRAuthScopeGenomicsCloudPlatform
 */
@interface GTLRGenomicsQuery_OperationsList : GTLRGenomicsQuery
// Previous library name was
//   +[GTLQueryGenomics queryForOperationsListWithname:]

/**
 *  A string for filtering Operations.
 *  In v2alpha1, the following filter fields are supported&#58;
 *  * createTime&#58; The time this job was created
 *  * events&#58; The set of event (names) that have occurred while running
 *  the pipeline. The &#58; operator can be used to determine if a
 *  particular event has occurred.
 *  * error&#58; If the pipeline is running, this value is NULL. Once the
 *  pipeline finishes, the value is the standard Google error code.
 *  * labels.key or labels."key with space" where key is a label key.
 *  * done&#58; If the pipeline is running, this value is false. Once the
 *  pipeline finishes, the value is true.
 *  In v1 and v1alpha2, the following filter fields are supported&#58;
 *  * projectId&#58; Required. Corresponds to
 *  OperationMetadata.projectId.
 *  * createTime&#58; The time this job was created, in seconds from the
 *  [epoch](http://en.wikipedia.org/wiki/Unix_time). Can use `>=` and/or `<=`
 *  operators.
 *  * status&#58; Can be `RUNNING`, `SUCCESS`, `FAILURE`, or `CANCELED`. Only
 *  one status may be specified.
 *  * labels.key where key is a label key.
 *  Examples&#58;
 *  * `projectId = my-project AND createTime >= 1432140000`
 *  * `projectId = my-project AND createTime >= 1432140000 AND createTime <=
 *  1432150000 AND status = RUNNING`
 *  * `projectId = my-project AND labels.color = *`
 *  * `projectId = my-project AND labels.color = red`
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The maximum number of results to return. The maximum value is 256. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRGenomics_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request.
 *  Authorization requires the following [Google
 *  IAM](https://cloud.google.com/iam) permission&#58;
 *  * `genomics.operations.list`
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRGenomicsQuery_OperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
