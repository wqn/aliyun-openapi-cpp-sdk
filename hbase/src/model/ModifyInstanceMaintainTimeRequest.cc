/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/hbase/model/ModifyInstanceMaintainTimeRequest.h>

using AlibabaCloud::HBase::Model::ModifyInstanceMaintainTimeRequest;

ModifyInstanceMaintainTimeRequest::ModifyInstanceMaintainTimeRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ModifyInstanceMaintainTime")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceMaintainTimeRequest::~ModifyInstanceMaintainTimeRequest()
{}

std::string ModifyInstanceMaintainTimeRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyInstanceMaintainTimeRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyInstanceMaintainTimeRequest::getMaintainEndTime()const
{
	return maintainEndTime_;
}

void ModifyInstanceMaintainTimeRequest::setMaintainEndTime(const std::string& maintainEndTime)
{
	maintainEndTime_ = maintainEndTime;
	setCoreParameter("MaintainEndTime", maintainEndTime);
}

std::string ModifyInstanceMaintainTimeRequest::getMaintainStartTime()const
{
	return maintainStartTime_;
}

void ModifyInstanceMaintainTimeRequest::setMaintainStartTime(const std::string& maintainStartTime)
{
	maintainStartTime_ = maintainStartTime;
	setCoreParameter("MaintainStartTime", maintainStartTime);
}
