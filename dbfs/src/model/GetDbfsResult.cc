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

#include <alibabacloud/dbfs/model/GetDbfsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

GetDbfsResult::GetDbfsResult() :
	ServiceResult()
{}

GetDbfsResult::GetDbfsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDbfsResult::~GetDbfsResult()
{}

void GetDbfsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBFSInfoNode = value["DBFSInfo"]["Info"];
	for (auto valueDBFSInfoInfo : allDBFSInfoNode)
	{
		Info dBFSInfoObject;
		if(!valueDBFSInfoInfo["FsName"].isNull())
			dBFSInfoObject.fsName = valueDBFSInfoInfo["FsName"].asString();
		if(!valueDBFSInfoInfo["DBFSClusterId"].isNull())
			dBFSInfoObject.dBFSClusterId = valueDBFSInfoInfo["DBFSClusterId"].asString();
		if(!valueDBFSInfoInfo["Category"].isNull())
			dBFSInfoObject.category = valueDBFSInfoInfo["Category"].asString();
		if(!valueDBFSInfoInfo["Status"].isNull())
			dBFSInfoObject.status = valueDBFSInfoInfo["Status"].asString();
		if(!valueDBFSInfoInfo["RegionId"].isNull())
			dBFSInfoObject.regionId = valueDBFSInfoInfo["RegionId"].asString();
		if(!valueDBFSInfoInfo["ZoneId"].isNull())
			dBFSInfoObject.zoneId = valueDBFSInfoInfo["ZoneId"].asString();
		if(!valueDBFSInfoInfo["AttachNodeNumber"].isNull())
			dBFSInfoObject.attachNodeNumber = std::stoi(valueDBFSInfoInfo["AttachNodeNumber"].asString());
		if(!valueDBFSInfoInfo["PayType"].isNull())
			dBFSInfoObject.payType = valueDBFSInfoInfo["PayType"].asString();
		if(!valueDBFSInfoInfo["FsId"].isNull())
			dBFSInfoObject.fsId = valueDBFSInfoInfo["FsId"].asString();
		if(!valueDBFSInfoInfo["SizeG"].isNull())
			dBFSInfoObject.sizeG = std::stoi(valueDBFSInfoInfo["SizeG"].asString());
		dBFSInfo_.push_back(dBFSInfoObject);
	}

}

std::vector<GetDbfsResult::Info> GetDbfsResult::getDBFSInfo()const
{
	return dBFSInfo_;
}

