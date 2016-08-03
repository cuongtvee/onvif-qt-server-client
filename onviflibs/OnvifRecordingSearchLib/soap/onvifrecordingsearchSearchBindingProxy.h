/* onvifrecordingsearchSearchBindingProxy.h
   Generated by gSOAP 2.8.22 from rcx.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef onvifrecordingsearchSearchBindingProxy_H
#define onvifrecordingsearchSearchBindingProxy_H
#include "onvifrecordingsearchH.h"

class SOAP_CMAC SearchBindingProxy
{ public:
	struct soap *soap;
	bool soap_own;
	/// Endpoint URL of service 'SearchBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Variables globally declared in rcx.h (non-static)
	/// Constructor
	SearchBindingProxy();
	/// Constructor to use/share an engine state
	SearchBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	SearchBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	SearchBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	SearchBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	SearchBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~SearchBindingProxy();
	/// Initializer used by constructors
	virtual	void SearchBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_recordingsearch__GetServiceCapabilities *recordingsearch__GetServiceCapabilities, _recordingsearch__GetServiceCapabilitiesResponse &recordingsearch__GetServiceCapabilitiesResponse) { return this->GetServiceCapabilities(NULL, NULL, recordingsearch__GetServiceCapabilities, recordingsearch__GetServiceCapabilitiesResponse); }
	virtual	int GetServiceCapabilities(const char *endpoint, const char *soap_action, _recordingsearch__GetServiceCapabilities *recordingsearch__GetServiceCapabilities, _recordingsearch__GetServiceCapabilitiesResponse &recordingsearch__GetServiceCapabilitiesResponse);

	/// Web service operation 'GetRecordingSummary' (returns error code or SOAP_OK)
	virtual	int GetRecordingSummary(_recordingsearch__GetRecordingSummary *recordingsearch__GetRecordingSummary, _recordingsearch__GetRecordingSummaryResponse &recordingsearch__GetRecordingSummaryResponse) { return this->GetRecordingSummary(NULL, NULL, recordingsearch__GetRecordingSummary, recordingsearch__GetRecordingSummaryResponse); }
	virtual	int GetRecordingSummary(const char *endpoint, const char *soap_action, _recordingsearch__GetRecordingSummary *recordingsearch__GetRecordingSummary, _recordingsearch__GetRecordingSummaryResponse &recordingsearch__GetRecordingSummaryResponse);

	/// Web service operation 'GetRecordingInformation' (returns error code or SOAP_OK)
	virtual	int GetRecordingInformation(_recordingsearch__GetRecordingInformation *recordingsearch__GetRecordingInformation, _recordingsearch__GetRecordingInformationResponse &recordingsearch__GetRecordingInformationResponse) { return this->GetRecordingInformation(NULL, NULL, recordingsearch__GetRecordingInformation, recordingsearch__GetRecordingInformationResponse); }
	virtual	int GetRecordingInformation(const char *endpoint, const char *soap_action, _recordingsearch__GetRecordingInformation *recordingsearch__GetRecordingInformation, _recordingsearch__GetRecordingInformationResponse &recordingsearch__GetRecordingInformationResponse);

	/// Web service operation 'GetMediaAttributes' (returns error code or SOAP_OK)
	virtual	int GetMediaAttributes(_recordingsearch__GetMediaAttributes *recordingsearch__GetMediaAttributes, _recordingsearch__GetMediaAttributesResponse &recordingsearch__GetMediaAttributesResponse) { return this->GetMediaAttributes(NULL, NULL, recordingsearch__GetMediaAttributes, recordingsearch__GetMediaAttributesResponse); }
	virtual	int GetMediaAttributes(const char *endpoint, const char *soap_action, _recordingsearch__GetMediaAttributes *recordingsearch__GetMediaAttributes, _recordingsearch__GetMediaAttributesResponse &recordingsearch__GetMediaAttributesResponse);

	/// Web service operation 'FindRecordings' (returns error code or SOAP_OK)
	virtual	int FindRecordings(_recordingsearch__FindRecordings *recordingsearch__FindRecordings, _recordingsearch__FindRecordingsResponse &recordingsearch__FindRecordingsResponse) { return this->FindRecordings(NULL, NULL, recordingsearch__FindRecordings, recordingsearch__FindRecordingsResponse); }
	virtual	int FindRecordings(const char *endpoint, const char *soap_action, _recordingsearch__FindRecordings *recordingsearch__FindRecordings, _recordingsearch__FindRecordingsResponse &recordingsearch__FindRecordingsResponse);

	/// Web service operation 'GetRecordingSearchResults' (returns error code or SOAP_OK)
	virtual	int GetRecordingSearchResults(_recordingsearch__GetRecordingSearchResults *recordingsearch__GetRecordingSearchResults, _recordingsearch__GetRecordingSearchResultsResponse &recordingsearch__GetRecordingSearchResultsResponse) { return this->GetRecordingSearchResults(NULL, NULL, recordingsearch__GetRecordingSearchResults, recordingsearch__GetRecordingSearchResultsResponse); }
	virtual	int GetRecordingSearchResults(const char *endpoint, const char *soap_action, _recordingsearch__GetRecordingSearchResults *recordingsearch__GetRecordingSearchResults, _recordingsearch__GetRecordingSearchResultsResponse &recordingsearch__GetRecordingSearchResultsResponse);

	/// Web service operation 'FindEvents' (returns error code or SOAP_OK)
	virtual	int FindEvents(_recordingsearch__FindEvents *recordingsearch__FindEvents, _recordingsearch__FindEventsResponse &recordingsearch__FindEventsResponse) { return this->FindEvents(NULL, NULL, recordingsearch__FindEvents, recordingsearch__FindEventsResponse); }
	virtual	int FindEvents(const char *endpoint, const char *soap_action, _recordingsearch__FindEvents *recordingsearch__FindEvents, _recordingsearch__FindEventsResponse &recordingsearch__FindEventsResponse);

	/// Web service operation 'GetEventSearchResults' (returns error code or SOAP_OK)
	virtual	int GetEventSearchResults(_recordingsearch__GetEventSearchResults *recordingsearch__GetEventSearchResults, _recordingsearch__GetEventSearchResultsResponse &recordingsearch__GetEventSearchResultsResponse) { return this->GetEventSearchResults(NULL, NULL, recordingsearch__GetEventSearchResults, recordingsearch__GetEventSearchResultsResponse); }
	virtual	int GetEventSearchResults(const char *endpoint, const char *soap_action, _recordingsearch__GetEventSearchResults *recordingsearch__GetEventSearchResults, _recordingsearch__GetEventSearchResultsResponse &recordingsearch__GetEventSearchResultsResponse);

	/// Web service operation 'FindPTZPosition' (returns error code or SOAP_OK)
	virtual	int FindPTZPosition(_recordingsearch__FindPTZPosition *recordingsearch__FindPTZPosition, _recordingsearch__FindPTZPositionResponse &recordingsearch__FindPTZPositionResponse) { return this->FindPTZPosition(NULL, NULL, recordingsearch__FindPTZPosition, recordingsearch__FindPTZPositionResponse); }
	virtual	int FindPTZPosition(const char *endpoint, const char *soap_action, _recordingsearch__FindPTZPosition *recordingsearch__FindPTZPosition, _recordingsearch__FindPTZPositionResponse &recordingsearch__FindPTZPositionResponse);

	/// Web service operation 'GetPTZPositionSearchResults' (returns error code or SOAP_OK)
	virtual	int GetPTZPositionSearchResults(_recordingsearch__GetPTZPositionSearchResults *recordingsearch__GetPTZPositionSearchResults, _recordingsearch__GetPTZPositionSearchResultsResponse &recordingsearch__GetPTZPositionSearchResultsResponse) { return this->GetPTZPositionSearchResults(NULL, NULL, recordingsearch__GetPTZPositionSearchResults, recordingsearch__GetPTZPositionSearchResultsResponse); }
	virtual	int GetPTZPositionSearchResults(const char *endpoint, const char *soap_action, _recordingsearch__GetPTZPositionSearchResults *recordingsearch__GetPTZPositionSearchResults, _recordingsearch__GetPTZPositionSearchResultsResponse &recordingsearch__GetPTZPositionSearchResultsResponse);

	/// Web service operation 'GetSearchState' (returns error code or SOAP_OK)
	virtual	int GetSearchState(_recordingsearch__GetSearchState *recordingsearch__GetSearchState, _recordingsearch__GetSearchStateResponse &recordingsearch__GetSearchStateResponse) { return this->GetSearchState(NULL, NULL, recordingsearch__GetSearchState, recordingsearch__GetSearchStateResponse); }
	virtual	int GetSearchState(const char *endpoint, const char *soap_action, _recordingsearch__GetSearchState *recordingsearch__GetSearchState, _recordingsearch__GetSearchStateResponse &recordingsearch__GetSearchStateResponse);

	/// Web service operation 'EndSearch' (returns error code or SOAP_OK)
	virtual	int EndSearch(_recordingsearch__EndSearch *recordingsearch__EndSearch, _recordingsearch__EndSearchResponse &recordingsearch__EndSearchResponse) { return this->EndSearch(NULL, NULL, recordingsearch__EndSearch, recordingsearch__EndSearchResponse); }
	virtual	int EndSearch(const char *endpoint, const char *soap_action, _recordingsearch__EndSearch *recordingsearch__EndSearch, _recordingsearch__EndSearchResponse &recordingsearch__EndSearchResponse);

	/// Web service operation 'FindMetadata' (returns error code or SOAP_OK)
	virtual	int FindMetadata(_recordingsearch__FindMetadata *recordingsearch__FindMetadata, _recordingsearch__FindMetadataResponse &recordingsearch__FindMetadataResponse) { return this->FindMetadata(NULL, NULL, recordingsearch__FindMetadata, recordingsearch__FindMetadataResponse); }
	virtual	int FindMetadata(const char *endpoint, const char *soap_action, _recordingsearch__FindMetadata *recordingsearch__FindMetadata, _recordingsearch__FindMetadataResponse &recordingsearch__FindMetadataResponse);

	/// Web service operation 'GetMetadataSearchResults' (returns error code or SOAP_OK)
	virtual	int GetMetadataSearchResults(_recordingsearch__GetMetadataSearchResults *recordingsearch__GetMetadataSearchResults, _recordingsearch__GetMetadataSearchResultsResponse &recordingsearch__GetMetadataSearchResultsResponse) { return this->GetMetadataSearchResults(NULL, NULL, recordingsearch__GetMetadataSearchResults, recordingsearch__GetMetadataSearchResultsResponse); }
	virtual	int GetMetadataSearchResults(const char *endpoint, const char *soap_action, _recordingsearch__GetMetadataSearchResults *recordingsearch__GetMetadataSearchResults, _recordingsearch__GetMetadataSearchResultsResponse &recordingsearch__GetMetadataSearchResultsResponse);
};
#endif
