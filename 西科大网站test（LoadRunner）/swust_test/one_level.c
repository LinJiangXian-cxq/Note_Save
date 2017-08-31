one_level()
{


	lr_start_transaction("w");


	web_url("list.htm", 
		"URL=http://www2.swust.edu.cn/47/list.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www2.swust.edu.cn/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../_upload/tpl/00/10/16/template16/css/img/menu-dot.png", ENDITEM, 
		"Url=../_upload/tpl/00/10/16/template16/css/img/li.png", ENDITEM, 
		"Url=../_js/_portletPlugs/simpleNews/css/posSplit.gif", ENDITEM, 
		"Url=../_upload/tpl/00/10/16/template16/css/img/back-arrow.png", ENDITEM, 
		LAST);

	web_custom_request("_visitcountdisplay_4", 
		"URL=http://www2.swust.edu.cn/_visitcountdisplay?articleIds=&siteId=2&funType=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www2.swust.edu.cn/47/list.htm", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("_visitcountdisplay_5", 
		"URL=http://www2.swust.edu.cn/_visitcountdisplay?articleIds=&siteId=2&funType=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www2.swust.edu.cn/47/list.htm", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	lr_end_transaction("w", LR_AUTO);


	return 0;
}
