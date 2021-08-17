// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Actions/ROS2FibonacciAction.h"

const rosidl_action_type_support_t* UROS2FibonacciAction::GetTypeSupport() const
{
    return ROSIDL_GET_ACTION_TYPE_SUPPORT(ue4_interfaces, Fibonacci);
}

void UROS2FibonacciAction::Init()
{
    Super::Init();
    ue4_interfaces__action__Fibonacci_SendGoal_Request__init(&Fibonacci_goal_request);
    ue4_interfaces__action__Fibonacci_SendGoal_Response__init(&Fibonacci_goal_response);
    ue4_interfaces__action__Fibonacci_GetResult_Request__init(&Fibonacci_result_request);
    ue4_interfaces__action__Fibonacci_GetResult_Response__init(&Fibonacci_result_response);
    ue4_interfaces__action__Fibonacci_FeedbackMessage__init(&Fibonacci_feedback_message);
}

void UROS2FibonacciAction::Fini()
{
    ue4_interfaces__action__Fibonacci_SendGoal_Request__fini(&Fibonacci_goal_request);
    ue4_interfaces__action__Fibonacci_SendGoal_Response__fini(&Fibonacci_goal_response);
    ue4_interfaces__action__Fibonacci_GetResult_Request__fini(&Fibonacci_result_request);
    ue4_interfaces__action__Fibonacci_GetResult_Response__fini(&Fibonacci_result_response);
    ue4_interfaces__action__Fibonacci_FeedbackMessage__fini(&Fibonacci_feedback_message);
    Super::Fini();
}

void UROS2FibonacciAction::SetGoalRequest(const FFibonacci_SendGoal_Request Goal)
{
    Goal.SetROS2(Fibonacci_goal_request);
}

void UROS2FibonacciAction::GetGoalRequest(FFibonacci_SendGoal_Request& Goal) const
{
    Goal.SetFromROS2(Fibonacci_goal_request);
}

void UROS2FibonacciAction::SetGoalResponse(const FFibonacci_SendGoal_Response Goal)
{
    Goal.SetROS2(Fibonacci_goal_response);
}

void UROS2FibonacciAction::GetGoalResponse(FFibonacci_SendGoal_Response& Goal) const
{
    Goal.SetFromROS2(Fibonacci_goal_response);
}

void UROS2FibonacciAction::SetResultRequest(const FFibonacci_GetResult_Request Result)
{
    Result.SetROS2(Fibonacci_result_request);
}

void UROS2FibonacciAction::GetResultRequest(FFibonacci_GetResult_Request& Result) const
{
    Result.SetFromROS2(Fibonacci_result_request);
}

void UROS2FibonacciAction::SetResultResponse(const FFibonacci_GetResult_Response Result)
{
    Result.SetROS2(Fibonacci_result_response);
}

void UROS2FibonacciAction::GetResultResponse(FFibonacci_GetResult_Response& Result) const
{
    Result.SetFromROS2(Fibonacci_result_response);
}


void UROS2FibonacciAction::SetFeedback(const FFibonacci_FeedbackMessage Feedback)
{
    Feedback.SetROS2(Fibonacci_feedback_message);
}

void UROS2FibonacciAction::GetFeedback(FFibonacci_FeedbackMessage& Feedback) const
{
    Feedback.SetFromROS2(Fibonacci_feedback_message);
}


void* UROS2FibonacciAction::GetGoalRequest()
{
    return &Fibonacci_goal_request;
}

void* UROS2FibonacciAction::GetGoalResponse()
{
    return &Fibonacci_goal_response;
}

void* UROS2FibonacciAction::GetResultRequest()
{
    return &Fibonacci_result_request;
}

void* UROS2FibonacciAction::GetResultResponse()
{
    return &Fibonacci_result_response;
}

void* UROS2FibonacciAction::GetFeedbackMessage()
{
    return &Fibonacci_feedback_message;
}