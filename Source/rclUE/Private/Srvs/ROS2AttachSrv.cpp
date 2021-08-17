// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Srvs/ROS2AttachSrv.h"

const rosidl_service_type_support_t* UROS2AttachSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, Attach);
}

void UROS2AttachSrv::Init()
{
    ue_msgs__srv__Attach_Request__init(&Attach_req);
    ue_msgs__srv__Attach_Response__init(&Attach_res);
}

void UROS2AttachSrv::Fini()
{
    ue_msgs__srv__Attach_Request__fini(&Attach_req);
    ue_msgs__srv__Attach_Response__fini(&Attach_res);
}

void UROS2AttachSrv::SetRequest(const FAttach_Request Request)
{
    Request.SetROS2(Attach_req);
}

void UROS2AttachSrv::GetRequest(FAttach_Request& Request) const
{
    Request.SetFromROS2(Attach_req);
}

void UROS2AttachSrv::SetResponse(const FAttach_Response Response)
{
    Response.SetROS2(Attach_res);
}

void UROS2AttachSrv::GetResponse(FAttach_Response& Response) const
{
    Response.SetFromROS2(Attach_res);
}

void* UROS2AttachSrv::GetRequest()
{
    return &Attach_req;
}

void* UROS2AttachSrv::GetResponse()
{
    return &Attach_res;
}

FString UROS2AttachSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2AttachSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}