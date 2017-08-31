one_level2()
{

	lr_think_time(21);

	web_url("list.htm_2", 
		"URL=http://www2.swust.edu.cn/89/list.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www2.swust.edu.cn/47/list.htm", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("_visitcountdisplay_6", 
		"URL=http://www2.swust.edu.cn/_visitcountdisplay?articleIds=&siteId=2&funType=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www2.swust.edu.cn/89/list.htm", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("_visitcountdisplay_7", 
		"URL=http://www2.swust.edu.cn/_visitcountdisplay?articleIds=&siteId=2&funType=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www2.swust.edu.cn/89/list.htm", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	return 0;
}