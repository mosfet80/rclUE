// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/ImageMarker.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "visualization_msgs/msg/image_marker.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2ColorRGBA.h"
#include "Msgs/ROS2Duration.h"
#include "Msgs/ROS2Header.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "std_msgs/msg/detail/color_rgba__functions.h"

// Generated
#include "ROS2ImgMarker.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSImgMarker
{
    GENERATED_BODY()

public:
    static constexpr int CIRCLE = 0;
    static constexpr int LINE_STRIP = 1;
    static constexpr int LINE_LIST = 2;
    static constexpr int POLYGON = 3;
    static constexpr int POINTS = 4;
    static constexpr int ADD = 0;
    static constexpr int REMOVE = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Ns;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Id = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Type = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Action = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Position = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Scale = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSColorRGBA OutlineColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 Filled = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSColorRGBA FillColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSDuration Lifetime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector> Points;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSColorRGBA> OutlineColors;

    FROSImgMarker()
    {
    }

    void SetFromROS2(const visualization_msgs__msg__ImageMarker& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        Ns = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.ns);

        Id = in_ros_data.id;

        Type = in_ros_data.type;

        Action = in_ros_data.action;

        Position = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Point>(in_ros_data.position);

        Scale = in_ros_data.scale;

        OutlineColor.SetFromROS2(in_ros_data.outline_color);

        Filled = in_ros_data.filled;

        FillColor.SetFromROS2(in_ros_data.fill_color);

        Lifetime.SetFromROS2(in_ros_data.lifetime);

        UROS2Utils::VectorSequenceROSToUEArray<geometry_msgs__msg__Point>(in_ros_data.points.data, Points, in_ros_data.points.size);

        UROS2Utils::SequenceROSToUEArray<std_msgs__msg__ColorRGBA, FROSColorRGBA>(
            in_ros_data.outline_colors.data, OutlineColors, in_ros_data.outline_colors.size);
    }

    void SetROS2(visualization_msgs__msg__ImageMarker& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        UROS2Utils::StringUEToROS(Ns, out_ros_data.ns);

        out_ros_data.id = Id;

        out_ros_data.type = Type;

        out_ros_data.action = Action;

        out_ros_data.position = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Point>(Position);

        out_ros_data.scale = Scale;

        OutlineColor.SetROS2(out_ros_data.outline_color);

        out_ros_data.filled = Filled;

        FillColor.SetROS2(out_ros_data.fill_color);

        Lifetime.SetROS2(out_ros_data.lifetime);

        if (out_ros_data.points.data)
        {
            geometry_msgs__msg__Point__Sequence__fini(&out_ros_data.points);
        }
        if (!geometry_msgs__msg__Point__Sequence__init(&out_ros_data.points, Points.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.points  "));
        }
        UROS2Utils::VectorArrayUEToROSSequence<geometry_msgs__msg__Point>(Points, out_ros_data.points.data, Points.Num());

        if (out_ros_data.outline_colors.data)
        {
            std_msgs__msg__ColorRGBA__Sequence__fini(&out_ros_data.outline_colors);
        }
        if (!std_msgs__msg__ColorRGBA__Sequence__init(&out_ros_data.outline_colors, OutlineColors.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.outline_colors  "));
        }
        UROS2Utils::ArrayUEToROSSequence<std_msgs__msg__ColorRGBA, FROSColorRGBA>(
            OutlineColors, out_ros_data.outline_colors.data, OutlineColors.Num());
    }
};

UCLASS()
class RCLUE_API UROS2ImgMarkerMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSImgMarker& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSImgMarker& Output) const;

    virtual void* Get() override;

    UFUNCTION(BlueprintCallable)
    static int CONST_CIRCLE()
    {
        return FROSImgMarker::CIRCLE;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_LINE_STRIP()
    {
        return FROSImgMarker::LINE_STRIP;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_LINE_LIST()
    {
        return FROSImgMarker::LINE_LIST;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_POLYGON()
    {
        return FROSImgMarker::POLYGON;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_POINTS()
    {
        return FROSImgMarker::POINTS;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_ADD()
    {
        return FROSImgMarker::ADD;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_REMOVE()
    {
        return FROSImgMarker::REMOVE;
    }

private:
    virtual FString MsgToString() const override;

    visualization_msgs__msg__ImageMarker image_marker_msg;
};
