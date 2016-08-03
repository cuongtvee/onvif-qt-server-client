/* onvifptzPTZBindingService.h
   Generated by gSOAP 2.8.22 from rcx.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef onvifptzPTZBindingService_H
#define onvifptzPTZBindingService_H
#include "onvifptzH.h"
class SOAP_CMAC PTZBindingService
{ public:
	struct soap *soap;
	bool soap_own;
	/// Variables globally declared in rcx.h (non-static)
	/// Constructor
	PTZBindingService();
	/// Constructor to use/share an engine state
	PTZBindingService(struct soap*);
	/// Constructor with engine input+output mode control
	PTZBindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	PTZBindingService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~PTZBindingService();
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to defaults
	virtual	void reset();
	/// Initializer used by constructor
	virtual	void PTZBindingService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	PTZBindingService *copy() SOAP_PURE_VIRTUAL;
	/// Close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
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
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Run simple single-thread (iterative, non-SSL) service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Then accept SSL handshake, when SSL is used
	virtual	int ssl_accept();
#endif
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error or SOAP_OK)
	virtual	int dispatch();
	virtual	int dispatch(struct soap *soap);

	///
	/// Service operations (you should define these):
	/// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
	///

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_ptzws__GetServiceCapabilities *ptzws__GetServiceCapabilities, _ptzws__GetServiceCapabilitiesResponse &ptzws__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetConfigurations' (returns error code or SOAP_OK)
	virtual	int GetConfigurations(_ptzws__GetConfigurations *ptzws__GetConfigurations, _ptzws__GetConfigurationsResponse &ptzws__GetConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetPresets' (returns error code or SOAP_OK)
	virtual	int GetPresets(_ptzws__GetPresets *ptzws__GetPresets, _ptzws__GetPresetsResponse &ptzws__GetPresetsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetPreset' (returns error code or SOAP_OK)
	virtual	int SetPreset(_ptzws__SetPreset *ptzws__SetPreset, _ptzws__SetPresetResponse &ptzws__SetPresetResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemovePreset' (returns error code or SOAP_OK)
	virtual	int RemovePreset(_ptzws__RemovePreset *ptzws__RemovePreset, _ptzws__RemovePresetResponse &ptzws__RemovePresetResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GotoPreset' (returns error code or SOAP_OK)
	virtual	int GotoPreset(_ptzws__GotoPreset *ptzws__GotoPreset, _ptzws__GotoPresetResponse &ptzws__GotoPresetResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetStatus' (returns error code or SOAP_OK)
	virtual	int GetStatus(_ptzws__GetStatus *ptzws__GetStatus, _ptzws__GetStatusResponse &ptzws__GetStatusResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetConfiguration' (returns error code or SOAP_OK)
	virtual	int GetConfiguration(_ptzws__GetConfiguration *ptzws__GetConfiguration, _ptzws__GetConfigurationResponse &ptzws__GetConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetNodes' (returns error code or SOAP_OK)
	virtual	int GetNodes(_ptzws__GetNodes *ptzws__GetNodes, _ptzws__GetNodesResponse &ptzws__GetNodesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetNode' (returns error code or SOAP_OK)
	virtual	int GetNode(_ptzws__GetNode *ptzws__GetNode, _ptzws__GetNodeResponse &ptzws__GetNodeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetConfiguration' (returns error code or SOAP_OK)
	virtual	int SetConfiguration(_ptzws__SetConfiguration *ptzws__SetConfiguration, _ptzws__SetConfigurationResponse &ptzws__SetConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetConfigurationOptions(_ptzws__GetConfigurationOptions *ptzws__GetConfigurationOptions, _ptzws__GetConfigurationOptionsResponse &ptzws__GetConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GotoHomePosition' (returns error code or SOAP_OK)
	virtual	int GotoHomePosition(_ptzws__GotoHomePosition *ptzws__GotoHomePosition, _ptzws__GotoHomePositionResponse &ptzws__GotoHomePositionResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetHomePosition' (returns error code or SOAP_OK)
	virtual	int SetHomePosition(_ptzws__SetHomePosition *ptzws__SetHomePosition, _ptzws__SetHomePositionResponse &ptzws__SetHomePositionResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'ContinuousMove' (returns error code or SOAP_OK)
	virtual	int ContinuousMove(_ptzws__ContinuousMove *ptzws__ContinuousMove, _ptzws__ContinuousMoveResponse &ptzws__ContinuousMoveResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RelativeMove' (returns error code or SOAP_OK)
	virtual	int RelativeMove(_ptzws__RelativeMove *ptzws__RelativeMove, _ptzws__RelativeMoveResponse &ptzws__RelativeMoveResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
	virtual	int SendAuxiliaryCommand(_ptzws__SendAuxiliaryCommand *ptzws__SendAuxiliaryCommand, _ptzws__SendAuxiliaryCommandResponse &ptzws__SendAuxiliaryCommandResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AbsoluteMove' (returns error code or SOAP_OK)
	virtual	int AbsoluteMove(_ptzws__AbsoluteMove *ptzws__AbsoluteMove, _ptzws__AbsoluteMoveResponse &ptzws__AbsoluteMoveResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'Stop' (returns error code or SOAP_OK)
	virtual	int Stop(_ptzws__Stop *ptzws__Stop, _ptzws__StopResponse &ptzws__StopResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetPresetTours' (returns error code or SOAP_OK)
	virtual	int GetPresetTours(_ptzws__GetPresetTours *ptzws__GetPresetTours, _ptzws__GetPresetToursResponse &ptzws__GetPresetToursResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetPresetTour' (returns error code or SOAP_OK)
	virtual	int GetPresetTour(_ptzws__GetPresetTour *ptzws__GetPresetTour, _ptzws__GetPresetTourResponse &ptzws__GetPresetTourResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetPresetTourOptions' (returns error code or SOAP_OK)
	virtual	int GetPresetTourOptions(_ptzws__GetPresetTourOptions *ptzws__GetPresetTourOptions, _ptzws__GetPresetTourOptionsResponse &ptzws__GetPresetTourOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreatePresetTour' (returns error code or SOAP_OK)
	virtual	int CreatePresetTour(_ptzws__CreatePresetTour *ptzws__CreatePresetTour, _ptzws__CreatePresetTourResponse &ptzws__CreatePresetTourResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'ModifyPresetTour' (returns error code or SOAP_OK)
	virtual	int ModifyPresetTour(_ptzws__ModifyPresetTour *ptzws__ModifyPresetTour, _ptzws__ModifyPresetTourResponse &ptzws__ModifyPresetTourResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'OperatePresetTour' (returns error code or SOAP_OK)
	virtual	int OperatePresetTour(_ptzws__OperatePresetTour *ptzws__OperatePresetTour, _ptzws__OperatePresetTourResponse &ptzws__OperatePresetTourResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemovePresetTour' (returns error code or SOAP_OK)
	virtual	int RemovePresetTour(_ptzws__RemovePresetTour *ptzws__RemovePresetTour, _ptzws__RemovePresetTourResponse &ptzws__RemovePresetTourResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCompatibleConfigurations' (returns error code or SOAP_OK)
	virtual	int GetCompatibleConfigurations(_ptzws__GetCompatibleConfigurations *ptzws__GetCompatibleConfigurations, _ptzws__GetCompatibleConfigurationsResponse &ptzws__GetCompatibleConfigurationsResponse) SOAP_PURE_VIRTUAL;
};
#endif
