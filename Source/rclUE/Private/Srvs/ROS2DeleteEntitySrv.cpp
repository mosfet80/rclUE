// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Srvs/ROS2DeleteEntitySrv.h"

const rosidl_service_type_support_t* UROS2DeleteEntitySrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, DeleteEntity);
}

void UROS2DeleteEntitySrv::Init()
{
    ue_msgs__srv__DeleteEntity_Request__init(&DeleteEntity_req);
    ue_msgs__srv__DeleteEntity_Response__init(&DeleteEntity_res);
}

void UROS2DeleteEntitySrv::Fini()
{
    ue_msgs__srv__DeleteEntity_Request__fini(&DeleteEntity_req);
    ue_msgs__srv__DeleteEntity_Response__fini(&DeleteEntity_res);
}

void UROS2DeleteEntitySrv::SetRequest(const FDeleteEntity_Request Request)
{
    Request.SetROS2(DeleteEntity_req);
}

void UROS2DeleteEntitySrv::GetRequest(FDeleteEntity_Request& Request) const
{
    Request.SetFromROS2(DeleteEntity_req);
}

void UROS2DeleteEntitySrv::SetResponse(const FDeleteEntity_Response Response)
{
    Response.SetROS2(DeleteEntity_res);
}

void UROS2DeleteEntitySrv::GetResponse(FDeleteEntity_Response& Response) const
{
    Response.SetFromROS2(DeleteEntity_res);
}

void* UROS2DeleteEntitySrv::GetRequest()
{
    return &DeleteEntity_req;
}

void* UROS2DeleteEntitySrv::GetResponse()
{
    return &DeleteEntity_res;
}

FString UROS2DeleteEntitySrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2DeleteEntitySrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}