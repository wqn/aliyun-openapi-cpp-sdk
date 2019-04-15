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

#include <alibabacloud/aegis/model/SetDatasourceStatusRequest.h>

using AlibabaCloud::Aegis::Model::SetDatasourceStatusRequest;

SetDatasourceStatusRequest::SetDatasourceStatusRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "SetDatasourceStatus")
{}

SetDatasourceStatusRequest::~SetDatasourceStatusRequest()
{}

std::string SetDatasourceStatusRequest::getProjectName()const
{
	return projectName_;
}

void SetDatasourceStatusRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string SetDatasourceStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void SetDatasourceStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string SetDatasourceStatusRequest::getLogStoreName()const
{
	return logStoreName_;
}

void SetDatasourceStatusRequest::setLogStoreName(const std::string& logStoreName)
{
	logStoreName_ = logStoreName;
	setCoreParameter("LogStoreName", logStoreName);
}

int SetDatasourceStatusRequest::getStatus()const
{
	return status_;
}

void SetDatasourceStatusRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

std::string SetDatasourceStatusRequest::getRegionNo()const
{
	return regionNo_;
}

void SetDatasourceStatusRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setCoreParameter("RegionNo", regionNo);
}

