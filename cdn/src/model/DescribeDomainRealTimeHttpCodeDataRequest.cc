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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeHttpCodeDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeHttpCodeDataRequest;

DescribeDomainRealTimeHttpCodeDataRequest::DescribeDomainRealTimeHttpCodeDataRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainRealTimeHttpCodeData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainRealTimeHttpCodeDataRequest::~DescribeDomainRealTimeHttpCodeDataRequest()
{}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDomainRealTimeHttpCodeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

