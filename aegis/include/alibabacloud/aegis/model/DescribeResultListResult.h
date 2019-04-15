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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBERESULTLISTRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBERESULTLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeResultListResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct ResultListItem
				{
					long lastOperate;
					int status;
					std::string ruleDescription;
					std::string instanceId;
					int ruleId;
					std::string ruleType;
					std::string intranetIp;
					std::string instanceName;
					std::string warnLevel;
					std::string details;
					long lastTimestamp;
					std::string internetIp;
					std::string uniqueKey;
					long modifiedTimestamp;
					int id;
					std::string fieldKey1;
					long createTimestamp;
					std::string ruleName;
					long aliUid;
					std::string fieldKey;
				};


				DescribeResultListResult();
				explicit DescribeResultListResult(const std::string &payload);
				~DescribeResultListResult();
				PageInfo getPageInfo()const;
				std::vector<ResultListItem> getResultList()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<ResultListItem> resultList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBERESULTLISTRESULT_H_