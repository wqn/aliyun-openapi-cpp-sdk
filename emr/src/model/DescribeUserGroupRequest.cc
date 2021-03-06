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

#include <alibabacloud/emr/model/DescribeUserGroupRequest.h>

using AlibabaCloud::Emr::Model::DescribeUserGroupRequest;

DescribeUserGroupRequest::DescribeUserGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeUserGroup")
{}

DescribeUserGroupRequest::~DescribeUserGroupRequest()
{}

long DescribeUserGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeUserGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeUserGroupRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUserGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long DescribeUserGroupRequest::getGroupId()const
{
	return groupId_;
}

void DescribeUserGroupRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

