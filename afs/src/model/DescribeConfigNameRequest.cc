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

#include <alibabacloud/afs/model/DescribeConfigNameRequest.h>

using AlibabaCloud::Afs::Model::DescribeConfigNameRequest;

DescribeConfigNameRequest::DescribeConfigNameRequest() :
	RpcServiceRequest("afs", "2018-01-12", "DescribeConfigName")
{}

DescribeConfigNameRequest::~DescribeConfigNameRequest()
{}

long DescribeConfigNameRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeConfigNameRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeConfigNameRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeConfigNameRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

