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

#ifndef ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTLUNGNODULERESULT_H_
#define ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTLUNGNODULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imageprocess/ImageprocessExport.h>

namespace AlibabaCloud
{
	namespace Imageprocess
	{
		namespace Model
		{
			class ALIBABACLOUD_IMAGEPROCESS_EXPORT DetectLungNoduleResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Serie
					{
						struct Element
						{
							std::string lobe;
							std::string category;
							float confidence;
							std::string lung;
							float x;
							float y;
							float z;
							float diameter;
						};
						std::vector<Serie::Element> elements;
						std::string seriesInstanceUid;
					};
					std::vector<Serie> series;
				};


				DetectLungNoduleResult();
				explicit DetectLungNoduleResult(const std::string &payload);
				~DetectLungNoduleResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTLUNGNODULERESULT_H_