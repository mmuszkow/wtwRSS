



<!DOCTYPE html>
<html>
<head>
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 <script type="text/javascript">
 
 
 
 var codesite_token = null;
 
 
 var logged_in_user_email = null;
 
 
 var relative_base_url = "";
 
 </script>
 
 
 <title>RTF2HTMLConverter.cpp - 
 local-todolist -
 
 Project Hosting on Google Code</title>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/15655628546230588420/css/ph_core.css">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/15655628546230588420/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/15655628546230588420/css/d_sb_20080522.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/15655628546230588420/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 margin-bottom:0;
}

 </style>
</head>
<body class="t4">
 <script type="text/javascript">
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 _gaq.push(
 ['projectTracker._setAccount', 'UA-2590867-2'],
 ['projectTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 </script>
<div class="headbg">
 <div id="gaia">
 
 <span>
 
 <a href="#" id="projects-dropdown" onclick="return false;"><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="https://www.google.com/accounts/ServiceLogin?service=code&amp;ltmpl=phosting&amp;continue=http%3A%2F%2Fcode.google.com%2Fp%2Flocal-todolist%2Fsource%2Fbrowse%2Fen%2F5.2.4%2F3rdParty%2Frtf2html%2FRTF2HTMLConverter.cpp&amp;followup=http%3A%2F%2Fcode.google.com%2Fp%2Flocal-todolist%2Fsource%2Fbrowse%2Fen%2F5.2.4%2F3rdParty%2Frtf2html%2FRTF2HTMLConverter.cpp" onclick="_CS_click('/gb/ph/signin');"><u>Sign in</u></a>
 
 </span>

 </div>
 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->




 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0">
 <tr style="height: 58px;">
 
 <td id="plogo">
 <a href="/p/local-todolist/">
 
 <img src="http://www.gstatic.com/codesite/ph/images/defaultlogo.png" alt="Logo">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/local-todolist/">local-todolist</a>
 </div>
 <div id="psum">
 <a id="project_summary_link" href="/p/local-todolist/" >Localize .dan.g.&#39;s ToDoList</a>
 
 </div>
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/local-todolist/" class="tab ">Project&nbsp;Home</a> 
 
 
 
 
 <a href="/p/local-todolist/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/local-todolist/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/local-todolist/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/local-todolist/source/checkout"
 class="tab active">Source</a>
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 
 
 <span class="inst1"><a href="/p/local-todolist/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/local-todolist/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/local-todolist/source/list">Changes</a></span> &nbsp;
 
 <form action="http://www.google.com/codesearch" method="get" style="display:inline"
 onsubmit="document.getElementById('codesearchq').value = document.getElementById('origq').value + ' package:http://local-todolist\\.googlecode\\.com'">
 <input type="hidden" name="q" id="codesearchq" value="">
 <input type="text" maxlength="2048" size="38" id="origq" name="origq" value="" title="Google Code Search" style="font-size:92%">&nbsp;<input type="submit" value="Search Trunk" name="btnG" style="font-size:92%">
 
 
 
 </form>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>
<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>


<div id="maincol"
 
>

 
<!-- IE -->




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/local-todolist/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/local-todolist/source/browse/en/">en</a><span class="sp">/&nbsp;</span><a href="/p/local-todolist/source/browse/en/5.2.4/">5.2.4</a><span class="sp">/&nbsp;</span><a href="/p/local-todolist/source/browse/en/5.2.4/3rdParty/">3rdParty</a><span class="sp">/&nbsp;</span><a href="/p/local-todolist/source/browse/en/5.2.4/3rdParty/rtf2html/">rtf2html</a><span class="sp">/&nbsp;</span>RTF2HTMLConverter.cpp</span>
 
 

 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/local-todolist/source/browse/en/current/3rdParty/rtf2html/RTF2HTMLConverter.cpp?r=31" title="Previous">&lsaquo;r31</a></li>
 
 </ul>
 </td>
 
 <td class="flipper"><b>r157</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(http://www.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn157_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn157_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn157_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn157_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn157_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn157_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn157_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn157_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn157_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn157_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn157_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn157_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn157_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn157_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn157_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn157_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn157_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn157_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn157_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn157_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn157_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn157_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn157_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn157_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn157_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn157_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn157_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn157_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn157_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn157_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn157_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn157_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn157_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn157_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn157_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn157_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn157_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn157_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn157_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn157_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn157_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn157_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn157_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn157_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn157_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn157_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn157_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn157_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn157_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn157_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn157_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn157_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn157_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn157_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn157_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn157_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn157_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn157_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn157_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn157_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn157_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn157_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn157_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn157_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn157_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn157_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn157_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn157_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn157_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn157_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn157_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn157_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn157_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn157_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn157_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn157_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn157_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn157_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn157_79"

><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn157_80"

><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn157_81"

><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn157_82"

><td id="82"><a href="#82">82</a></td></tr
><tr id="gr_svn157_83"

><td id="83"><a href="#83">83</a></td></tr
><tr id="gr_svn157_84"

><td id="84"><a href="#84">84</a></td></tr
><tr id="gr_svn157_85"

><td id="85"><a href="#85">85</a></td></tr
><tr id="gr_svn157_86"

><td id="86"><a href="#86">86</a></td></tr
><tr id="gr_svn157_87"

><td id="87"><a href="#87">87</a></td></tr
><tr id="gr_svn157_88"

><td id="88"><a href="#88">88</a></td></tr
><tr id="gr_svn157_89"

><td id="89"><a href="#89">89</a></td></tr
><tr id="gr_svn157_90"

><td id="90"><a href="#90">90</a></td></tr
><tr id="gr_svn157_91"

><td id="91"><a href="#91">91</a></td></tr
><tr id="gr_svn157_92"

><td id="92"><a href="#92">92</a></td></tr
><tr id="gr_svn157_93"

><td id="93"><a href="#93">93</a></td></tr
><tr id="gr_svn157_94"

><td id="94"><a href="#94">94</a></td></tr
><tr id="gr_svn157_95"

><td id="95"><a href="#95">95</a></td></tr
><tr id="gr_svn157_96"

><td id="96"><a href="#96">96</a></td></tr
><tr id="gr_svn157_97"

><td id="97"><a href="#97">97</a></td></tr
><tr id="gr_svn157_98"

><td id="98"><a href="#98">98</a></td></tr
><tr id="gr_svn157_99"

><td id="99"><a href="#99">99</a></td></tr
><tr id="gr_svn157_100"

><td id="100"><a href="#100">100</a></td></tr
><tr id="gr_svn157_101"

><td id="101"><a href="#101">101</a></td></tr
><tr id="gr_svn157_102"

><td id="102"><a href="#102">102</a></td></tr
><tr id="gr_svn157_103"

><td id="103"><a href="#103">103</a></td></tr
><tr id="gr_svn157_104"

><td id="104"><a href="#104">104</a></td></tr
><tr id="gr_svn157_105"

><td id="105"><a href="#105">105</a></td></tr
><tr id="gr_svn157_106"

><td id="106"><a href="#106">106</a></td></tr
><tr id="gr_svn157_107"

><td id="107"><a href="#107">107</a></td></tr
><tr id="gr_svn157_108"

><td id="108"><a href="#108">108</a></td></tr
><tr id="gr_svn157_109"

><td id="109"><a href="#109">109</a></td></tr
><tr id="gr_svn157_110"

><td id="110"><a href="#110">110</a></td></tr
><tr id="gr_svn157_111"

><td id="111"><a href="#111">111</a></td></tr
><tr id="gr_svn157_112"

><td id="112"><a href="#112">112</a></td></tr
><tr id="gr_svn157_113"

><td id="113"><a href="#113">113</a></td></tr
><tr id="gr_svn157_114"

><td id="114"><a href="#114">114</a></td></tr
><tr id="gr_svn157_115"

><td id="115"><a href="#115">115</a></td></tr
><tr id="gr_svn157_116"

><td id="116"><a href="#116">116</a></td></tr
><tr id="gr_svn157_117"

><td id="117"><a href="#117">117</a></td></tr
><tr id="gr_svn157_118"

><td id="118"><a href="#118">118</a></td></tr
><tr id="gr_svn157_119"

><td id="119"><a href="#119">119</a></td></tr
><tr id="gr_svn157_120"

><td id="120"><a href="#120">120</a></td></tr
><tr id="gr_svn157_121"

><td id="121"><a href="#121">121</a></td></tr
><tr id="gr_svn157_122"

><td id="122"><a href="#122">122</a></td></tr
><tr id="gr_svn157_123"

><td id="123"><a href="#123">123</a></td></tr
><tr id="gr_svn157_124"

><td id="124"><a href="#124">124</a></td></tr
><tr id="gr_svn157_125"

><td id="125"><a href="#125">125</a></td></tr
><tr id="gr_svn157_126"

><td id="126"><a href="#126">126</a></td></tr
><tr id="gr_svn157_127"

><td id="127"><a href="#127">127</a></td></tr
><tr id="gr_svn157_128"

><td id="128"><a href="#128">128</a></td></tr
><tr id="gr_svn157_129"

><td id="129"><a href="#129">129</a></td></tr
><tr id="gr_svn157_130"

><td id="130"><a href="#130">130</a></td></tr
><tr id="gr_svn157_131"

><td id="131"><a href="#131">131</a></td></tr
><tr id="gr_svn157_132"

><td id="132"><a href="#132">132</a></td></tr
><tr id="gr_svn157_133"

><td id="133"><a href="#133">133</a></td></tr
><tr id="gr_svn157_134"

><td id="134"><a href="#134">134</a></td></tr
><tr id="gr_svn157_135"

><td id="135"><a href="#135">135</a></td></tr
><tr id="gr_svn157_136"

><td id="136"><a href="#136">136</a></td></tr
><tr id="gr_svn157_137"

><td id="137"><a href="#137">137</a></td></tr
><tr id="gr_svn157_138"

><td id="138"><a href="#138">138</a></td></tr
><tr id="gr_svn157_139"

><td id="139"><a href="#139">139</a></td></tr
><tr id="gr_svn157_140"

><td id="140"><a href="#140">140</a></td></tr
><tr id="gr_svn157_141"

><td id="141"><a href="#141">141</a></td></tr
><tr id="gr_svn157_142"

><td id="142"><a href="#142">142</a></td></tr
><tr id="gr_svn157_143"

><td id="143"><a href="#143">143</a></td></tr
><tr id="gr_svn157_144"

><td id="144"><a href="#144">144</a></td></tr
><tr id="gr_svn157_145"

><td id="145"><a href="#145">145</a></td></tr
><tr id="gr_svn157_146"

><td id="146"><a href="#146">146</a></td></tr
><tr id="gr_svn157_147"

><td id="147"><a href="#147">147</a></td></tr
><tr id="gr_svn157_148"

><td id="148"><a href="#148">148</a></td></tr
><tr id="gr_svn157_149"

><td id="149"><a href="#149">149</a></td></tr
><tr id="gr_svn157_150"

><td id="150"><a href="#150">150</a></td></tr
><tr id="gr_svn157_151"

><td id="151"><a href="#151">151</a></td></tr
><tr id="gr_svn157_152"

><td id="152"><a href="#152">152</a></td></tr
><tr id="gr_svn157_153"

><td id="153"><a href="#153">153</a></td></tr
><tr id="gr_svn157_154"

><td id="154"><a href="#154">154</a></td></tr
><tr id="gr_svn157_155"

><td id="155"><a href="#155">155</a></td></tr
><tr id="gr_svn157_156"

><td id="156"><a href="#156">156</a></td></tr
><tr id="gr_svn157_157"

><td id="157"><a href="#157">157</a></td></tr
><tr id="gr_svn157_158"

><td id="158"><a href="#158">158</a></td></tr
><tr id="gr_svn157_159"

><td id="159"><a href="#159">159</a></td></tr
><tr id="gr_svn157_160"

><td id="160"><a href="#160">160</a></td></tr
><tr id="gr_svn157_161"

><td id="161"><a href="#161">161</a></td></tr
><tr id="gr_svn157_162"

><td id="162"><a href="#162">162</a></td></tr
><tr id="gr_svn157_163"

><td id="163"><a href="#163">163</a></td></tr
><tr id="gr_svn157_164"

><td id="164"><a href="#164">164</a></td></tr
><tr id="gr_svn157_165"

><td id="165"><a href="#165">165</a></td></tr
><tr id="gr_svn157_166"

><td id="166"><a href="#166">166</a></td></tr
><tr id="gr_svn157_167"

><td id="167"><a href="#167">167</a></td></tr
><tr id="gr_svn157_168"

><td id="168"><a href="#168">168</a></td></tr
><tr id="gr_svn157_169"

><td id="169"><a href="#169">169</a></td></tr
><tr id="gr_svn157_170"

><td id="170"><a href="#170">170</a></td></tr
><tr id="gr_svn157_171"

><td id="171"><a href="#171">171</a></td></tr
><tr id="gr_svn157_172"

><td id="172"><a href="#172">172</a></td></tr
><tr id="gr_svn157_173"

><td id="173"><a href="#173">173</a></td></tr
><tr id="gr_svn157_174"

><td id="174"><a href="#174">174</a></td></tr
><tr id="gr_svn157_175"

><td id="175"><a href="#175">175</a></td></tr
><tr id="gr_svn157_176"

><td id="176"><a href="#176">176</a></td></tr
><tr id="gr_svn157_177"

><td id="177"><a href="#177">177</a></td></tr
><tr id="gr_svn157_178"

><td id="178"><a href="#178">178</a></td></tr
><tr id="gr_svn157_179"

><td id="179"><a href="#179">179</a></td></tr
><tr id="gr_svn157_180"

><td id="180"><a href="#180">180</a></td></tr
><tr id="gr_svn157_181"

><td id="181"><a href="#181">181</a></td></tr
><tr id="gr_svn157_182"

><td id="182"><a href="#182">182</a></td></tr
><tr id="gr_svn157_183"

><td id="183"><a href="#183">183</a></td></tr
><tr id="gr_svn157_184"

><td id="184"><a href="#184">184</a></td></tr
><tr id="gr_svn157_185"

><td id="185"><a href="#185">185</a></td></tr
><tr id="gr_svn157_186"

><td id="186"><a href="#186">186</a></td></tr
><tr id="gr_svn157_187"

><td id="187"><a href="#187">187</a></td></tr
><tr id="gr_svn157_188"

><td id="188"><a href="#188">188</a></td></tr
><tr id="gr_svn157_189"

><td id="189"><a href="#189">189</a></td></tr
><tr id="gr_svn157_190"

><td id="190"><a href="#190">190</a></td></tr
><tr id="gr_svn157_191"

><td id="191"><a href="#191">191</a></td></tr
><tr id="gr_svn157_192"

><td id="192"><a href="#192">192</a></td></tr
><tr id="gr_svn157_193"

><td id="193"><a href="#193">193</a></td></tr
><tr id="gr_svn157_194"

><td id="194"><a href="#194">194</a></td></tr
><tr id="gr_svn157_195"

><td id="195"><a href="#195">195</a></td></tr
><tr id="gr_svn157_196"

><td id="196"><a href="#196">196</a></td></tr
><tr id="gr_svn157_197"

><td id="197"><a href="#197">197</a></td></tr
><tr id="gr_svn157_198"

><td id="198"><a href="#198">198</a></td></tr
><tr id="gr_svn157_199"

><td id="199"><a href="#199">199</a></td></tr
><tr id="gr_svn157_200"

><td id="200"><a href="#200">200</a></td></tr
><tr id="gr_svn157_201"

><td id="201"><a href="#201">201</a></td></tr
><tr id="gr_svn157_202"

><td id="202"><a href="#202">202</a></td></tr
><tr id="gr_svn157_203"

><td id="203"><a href="#203">203</a></td></tr
><tr id="gr_svn157_204"

><td id="204"><a href="#204">204</a></td></tr
><tr id="gr_svn157_205"

><td id="205"><a href="#205">205</a></td></tr
><tr id="gr_svn157_206"

><td id="206"><a href="#206">206</a></td></tr
><tr id="gr_svn157_207"

><td id="207"><a href="#207">207</a></td></tr
><tr id="gr_svn157_208"

><td id="208"><a href="#208">208</a></td></tr
><tr id="gr_svn157_209"

><td id="209"><a href="#209">209</a></td></tr
><tr id="gr_svn157_210"

><td id="210"><a href="#210">210</a></td></tr
><tr id="gr_svn157_211"

><td id="211"><a href="#211">211</a></td></tr
><tr id="gr_svn157_212"

><td id="212"><a href="#212">212</a></td></tr
><tr id="gr_svn157_213"

><td id="213"><a href="#213">213</a></td></tr
><tr id="gr_svn157_214"

><td id="214"><a href="#214">214</a></td></tr
><tr id="gr_svn157_215"

><td id="215"><a href="#215">215</a></td></tr
><tr id="gr_svn157_216"

><td id="216"><a href="#216">216</a></td></tr
><tr id="gr_svn157_217"

><td id="217"><a href="#217">217</a></td></tr
><tr id="gr_svn157_218"

><td id="218"><a href="#218">218</a></td></tr
><tr id="gr_svn157_219"

><td id="219"><a href="#219">219</a></td></tr
><tr id="gr_svn157_220"

><td id="220"><a href="#220">220</a></td></tr
><tr id="gr_svn157_221"

><td id="221"><a href="#221">221</a></td></tr
><tr id="gr_svn157_222"

><td id="222"><a href="#222">222</a></td></tr
><tr id="gr_svn157_223"

><td id="223"><a href="#223">223</a></td></tr
><tr id="gr_svn157_224"

><td id="224"><a href="#224">224</a></td></tr
><tr id="gr_svn157_225"

><td id="225"><a href="#225">225</a></td></tr
><tr id="gr_svn157_226"

><td id="226"><a href="#226">226</a></td></tr
><tr id="gr_svn157_227"

><td id="227"><a href="#227">227</a></td></tr
><tr id="gr_svn157_228"

><td id="228"><a href="#228">228</a></td></tr
><tr id="gr_svn157_229"

><td id="229"><a href="#229">229</a></td></tr
><tr id="gr_svn157_230"

><td id="230"><a href="#230">230</a></td></tr
><tr id="gr_svn157_231"

><td id="231"><a href="#231">231</a></td></tr
><tr id="gr_svn157_232"

><td id="232"><a href="#232">232</a></td></tr
><tr id="gr_svn157_233"

><td id="233"><a href="#233">233</a></td></tr
><tr id="gr_svn157_234"

><td id="234"><a href="#234">234</a></td></tr
><tr id="gr_svn157_235"

><td id="235"><a href="#235">235</a></td></tr
><tr id="gr_svn157_236"

><td id="236"><a href="#236">236</a></td></tr
><tr id="gr_svn157_237"

><td id="237"><a href="#237">237</a></td></tr
><tr id="gr_svn157_238"

><td id="238"><a href="#238">238</a></td></tr
><tr id="gr_svn157_239"

><td id="239"><a href="#239">239</a></td></tr
><tr id="gr_svn157_240"

><td id="240"><a href="#240">240</a></td></tr
><tr id="gr_svn157_241"

><td id="241"><a href="#241">241</a></td></tr
><tr id="gr_svn157_242"

><td id="242"><a href="#242">242</a></td></tr
><tr id="gr_svn157_243"

><td id="243"><a href="#243">243</a></td></tr
><tr id="gr_svn157_244"

><td id="244"><a href="#244">244</a></td></tr
><tr id="gr_svn157_245"

><td id="245"><a href="#245">245</a></td></tr
><tr id="gr_svn157_246"

><td id="246"><a href="#246">246</a></td></tr
><tr id="gr_svn157_247"

><td id="247"><a href="#247">247</a></td></tr
><tr id="gr_svn157_248"

><td id="248"><a href="#248">248</a></td></tr
><tr id="gr_svn157_249"

><td id="249"><a href="#249">249</a></td></tr
><tr id="gr_svn157_250"

><td id="250"><a href="#250">250</a></td></tr
><tr id="gr_svn157_251"

><td id="251"><a href="#251">251</a></td></tr
><tr id="gr_svn157_252"

><td id="252"><a href="#252">252</a></td></tr
><tr id="gr_svn157_253"

><td id="253"><a href="#253">253</a></td></tr
><tr id="gr_svn157_254"

><td id="254"><a href="#254">254</a></td></tr
><tr id="gr_svn157_255"

><td id="255"><a href="#255">255</a></td></tr
><tr id="gr_svn157_256"

><td id="256"><a href="#256">256</a></td></tr
><tr id="gr_svn157_257"

><td id="257"><a href="#257">257</a></td></tr
><tr id="gr_svn157_258"

><td id="258"><a href="#258">258</a></td></tr
><tr id="gr_svn157_259"

><td id="259"><a href="#259">259</a></td></tr
><tr id="gr_svn157_260"

><td id="260"><a href="#260">260</a></td></tr
><tr id="gr_svn157_261"

><td id="261"><a href="#261">261</a></td></tr
><tr id="gr_svn157_262"

><td id="262"><a href="#262">262</a></td></tr
><tr id="gr_svn157_263"

><td id="263"><a href="#263">263</a></td></tr
><tr id="gr_svn157_264"

><td id="264"><a href="#264">264</a></td></tr
><tr id="gr_svn157_265"

><td id="265"><a href="#265">265</a></td></tr
><tr id="gr_svn157_266"

><td id="266"><a href="#266">266</a></td></tr
><tr id="gr_svn157_267"

><td id="267"><a href="#267">267</a></td></tr
><tr id="gr_svn157_268"

><td id="268"><a href="#268">268</a></td></tr
><tr id="gr_svn157_269"

><td id="269"><a href="#269">269</a></td></tr
><tr id="gr_svn157_270"

><td id="270"><a href="#270">270</a></td></tr
><tr id="gr_svn157_271"

><td id="271"><a href="#271">271</a></td></tr
><tr id="gr_svn157_272"

><td id="272"><a href="#272">272</a></td></tr
><tr id="gr_svn157_273"

><td id="273"><a href="#273">273</a></td></tr
><tr id="gr_svn157_274"

><td id="274"><a href="#274">274</a></td></tr
><tr id="gr_svn157_275"

><td id="275"><a href="#275">275</a></td></tr
><tr id="gr_svn157_276"

><td id="276"><a href="#276">276</a></td></tr
><tr id="gr_svn157_277"

><td id="277"><a href="#277">277</a></td></tr
><tr id="gr_svn157_278"

><td id="278"><a href="#278">278</a></td></tr
><tr id="gr_svn157_279"

><td id="279"><a href="#279">279</a></td></tr
><tr id="gr_svn157_280"

><td id="280"><a href="#280">280</a></td></tr
><tr id="gr_svn157_281"

><td id="281"><a href="#281">281</a></td></tr
><tr id="gr_svn157_282"

><td id="282"><a href="#282">282</a></td></tr
><tr id="gr_svn157_283"

><td id="283"><a href="#283">283</a></td></tr
><tr id="gr_svn157_284"

><td id="284"><a href="#284">284</a></td></tr
><tr id="gr_svn157_285"

><td id="285"><a href="#285">285</a></td></tr
><tr id="gr_svn157_286"

><td id="286"><a href="#286">286</a></td></tr
><tr id="gr_svn157_287"

><td id="287"><a href="#287">287</a></td></tr
><tr id="gr_svn157_288"

><td id="288"><a href="#288">288</a></td></tr
><tr id="gr_svn157_289"

><td id="289"><a href="#289">289</a></td></tr
><tr id="gr_svn157_290"

><td id="290"><a href="#290">290</a></td></tr
><tr id="gr_svn157_291"

><td id="291"><a href="#291">291</a></td></tr
><tr id="gr_svn157_292"

><td id="292"><a href="#292">292</a></td></tr
><tr id="gr_svn157_293"

><td id="293"><a href="#293">293</a></td></tr
><tr id="gr_svn157_294"

><td id="294"><a href="#294">294</a></td></tr
><tr id="gr_svn157_295"

><td id="295"><a href="#295">295</a></td></tr
><tr id="gr_svn157_296"

><td id="296"><a href="#296">296</a></td></tr
><tr id="gr_svn157_297"

><td id="297"><a href="#297">297</a></td></tr
><tr id="gr_svn157_298"

><td id="298"><a href="#298">298</a></td></tr
><tr id="gr_svn157_299"

><td id="299"><a href="#299">299</a></td></tr
><tr id="gr_svn157_300"

><td id="300"><a href="#300">300</a></td></tr
><tr id="gr_svn157_301"

><td id="301"><a href="#301">301</a></td></tr
><tr id="gr_svn157_302"

><td id="302"><a href="#302">302</a></td></tr
><tr id="gr_svn157_303"

><td id="303"><a href="#303">303</a></td></tr
><tr id="gr_svn157_304"

><td id="304"><a href="#304">304</a></td></tr
><tr id="gr_svn157_305"

><td id="305"><a href="#305">305</a></td></tr
><tr id="gr_svn157_306"

><td id="306"><a href="#306">306</a></td></tr
><tr id="gr_svn157_307"

><td id="307"><a href="#307">307</a></td></tr
><tr id="gr_svn157_308"

><td id="308"><a href="#308">308</a></td></tr
><tr id="gr_svn157_309"

><td id="309"><a href="#309">309</a></td></tr
><tr id="gr_svn157_310"

><td id="310"><a href="#310">310</a></td></tr
><tr id="gr_svn157_311"

><td id="311"><a href="#311">311</a></td></tr
><tr id="gr_svn157_312"

><td id="312"><a href="#312">312</a></td></tr
><tr id="gr_svn157_313"

><td id="313"><a href="#313">313</a></td></tr
><tr id="gr_svn157_314"

><td id="314"><a href="#314">314</a></td></tr
><tr id="gr_svn157_315"

><td id="315"><a href="#315">315</a></td></tr
><tr id="gr_svn157_316"

><td id="316"><a href="#316">316</a></td></tr
><tr id="gr_svn157_317"

><td id="317"><a href="#317">317</a></td></tr
><tr id="gr_svn157_318"

><td id="318"><a href="#318">318</a></td></tr
><tr id="gr_svn157_319"

><td id="319"><a href="#319">319</a></td></tr
><tr id="gr_svn157_320"

><td id="320"><a href="#320">320</a></td></tr
><tr id="gr_svn157_321"

><td id="321"><a href="#321">321</a></td></tr
><tr id="gr_svn157_322"

><td id="322"><a href="#322">322</a></td></tr
><tr id="gr_svn157_323"

><td id="323"><a href="#323">323</a></td></tr
><tr id="gr_svn157_324"

><td id="324"><a href="#324">324</a></td></tr
><tr id="gr_svn157_325"

><td id="325"><a href="#325">325</a></td></tr
><tr id="gr_svn157_326"

><td id="326"><a href="#326">326</a></td></tr
><tr id="gr_svn157_327"

><td id="327"><a href="#327">327</a></td></tr
><tr id="gr_svn157_328"

><td id="328"><a href="#328">328</a></td></tr
><tr id="gr_svn157_329"

><td id="329"><a href="#329">329</a></td></tr
><tr id="gr_svn157_330"

><td id="330"><a href="#330">330</a></td></tr
><tr id="gr_svn157_331"

><td id="331"><a href="#331">331</a></td></tr
><tr id="gr_svn157_332"

><td id="332"><a href="#332">332</a></td></tr
><tr id="gr_svn157_333"

><td id="333"><a href="#333">333</a></td></tr
><tr id="gr_svn157_334"

><td id="334"><a href="#334">334</a></td></tr
><tr id="gr_svn157_335"

><td id="335"><a href="#335">335</a></td></tr
><tr id="gr_svn157_336"

><td id="336"><a href="#336">336</a></td></tr
><tr id="gr_svn157_337"

><td id="337"><a href="#337">337</a></td></tr
><tr id="gr_svn157_338"

><td id="338"><a href="#338">338</a></td></tr
><tr id="gr_svn157_339"

><td id="339"><a href="#339">339</a></td></tr
><tr id="gr_svn157_340"

><td id="340"><a href="#340">340</a></td></tr
><tr id="gr_svn157_341"

><td id="341"><a href="#341">341</a></td></tr
><tr id="gr_svn157_342"

><td id="342"><a href="#342">342</a></td></tr
><tr id="gr_svn157_343"

><td id="343"><a href="#343">343</a></td></tr
><tr id="gr_svn157_344"

><td id="344"><a href="#344">344</a></td></tr
><tr id="gr_svn157_345"

><td id="345"><a href="#345">345</a></td></tr
><tr id="gr_svn157_346"

><td id="346"><a href="#346">346</a></td></tr
><tr id="gr_svn157_347"

><td id="347"><a href="#347">347</a></td></tr
><tr id="gr_svn157_348"

><td id="348"><a href="#348">348</a></td></tr
><tr id="gr_svn157_349"

><td id="349"><a href="#349">349</a></td></tr
><tr id="gr_svn157_350"

><td id="350"><a href="#350">350</a></td></tr
><tr id="gr_svn157_351"

><td id="351"><a href="#351">351</a></td></tr
><tr id="gr_svn157_352"

><td id="352"><a href="#352">352</a></td></tr
><tr id="gr_svn157_353"

><td id="353"><a href="#353">353</a></td></tr
><tr id="gr_svn157_354"

><td id="354"><a href="#354">354</a></td></tr
><tr id="gr_svn157_355"

><td id="355"><a href="#355">355</a></td></tr
><tr id="gr_svn157_356"

><td id="356"><a href="#356">356</a></td></tr
><tr id="gr_svn157_357"

><td id="357"><a href="#357">357</a></td></tr
><tr id="gr_svn157_358"

><td id="358"><a href="#358">358</a></td></tr
><tr id="gr_svn157_359"

><td id="359"><a href="#359">359</a></td></tr
><tr id="gr_svn157_360"

><td id="360"><a href="#360">360</a></td></tr
><tr id="gr_svn157_361"

><td id="361"><a href="#361">361</a></td></tr
><tr id="gr_svn157_362"

><td id="362"><a href="#362">362</a></td></tr
><tr id="gr_svn157_363"

><td id="363"><a href="#363">363</a></td></tr
><tr id="gr_svn157_364"

><td id="364"><a href="#364">364</a></td></tr
><tr id="gr_svn157_365"

><td id="365"><a href="#365">365</a></td></tr
><tr id="gr_svn157_366"

><td id="366"><a href="#366">366</a></td></tr
><tr id="gr_svn157_367"

><td id="367"><a href="#367">367</a></td></tr
><tr id="gr_svn157_368"

><td id="368"><a href="#368">368</a></td></tr
><tr id="gr_svn157_369"

><td id="369"><a href="#369">369</a></td></tr
><tr id="gr_svn157_370"

><td id="370"><a href="#370">370</a></td></tr
><tr id="gr_svn157_371"

><td id="371"><a href="#371">371</a></td></tr
><tr id="gr_svn157_372"

><td id="372"><a href="#372">372</a></td></tr
><tr id="gr_svn157_373"

><td id="373"><a href="#373">373</a></td></tr
><tr id="gr_svn157_374"

><td id="374"><a href="#374">374</a></td></tr
><tr id="gr_svn157_375"

><td id="375"><a href="#375">375</a></td></tr
><tr id="gr_svn157_376"

><td id="376"><a href="#376">376</a></td></tr
><tr id="gr_svn157_377"

><td id="377"><a href="#377">377</a></td></tr
><tr id="gr_svn157_378"

><td id="378"><a href="#378">378</a></td></tr
><tr id="gr_svn157_379"

><td id="379"><a href="#379">379</a></td></tr
><tr id="gr_svn157_380"

><td id="380"><a href="#380">380</a></td></tr
><tr id="gr_svn157_381"

><td id="381"><a href="#381">381</a></td></tr
><tr id="gr_svn157_382"

><td id="382"><a href="#382">382</a></td></tr
><tr id="gr_svn157_383"

><td id="383"><a href="#383">383</a></td></tr
><tr id="gr_svn157_384"

><td id="384"><a href="#384">384</a></td></tr
><tr id="gr_svn157_385"

><td id="385"><a href="#385">385</a></td></tr
><tr id="gr_svn157_386"

><td id="386"><a href="#386">386</a></td></tr
><tr id="gr_svn157_387"

><td id="387"><a href="#387">387</a></td></tr
><tr id="gr_svn157_388"

><td id="388"><a href="#388">388</a></td></tr
><tr id="gr_svn157_389"

><td id="389"><a href="#389">389</a></td></tr
><tr id="gr_svn157_390"

><td id="390"><a href="#390">390</a></td></tr
><tr id="gr_svn157_391"

><td id="391"><a href="#391">391</a></td></tr
><tr id="gr_svn157_392"

><td id="392"><a href="#392">392</a></td></tr
><tr id="gr_svn157_393"

><td id="393"><a href="#393">393</a></td></tr
><tr id="gr_svn157_394"

><td id="394"><a href="#394">394</a></td></tr
><tr id="gr_svn157_395"

><td id="395"><a href="#395">395</a></td></tr
><tr id="gr_svn157_396"

><td id="396"><a href="#396">396</a></td></tr
><tr id="gr_svn157_397"

><td id="397"><a href="#397">397</a></td></tr
><tr id="gr_svn157_398"

><td id="398"><a href="#398">398</a></td></tr
><tr id="gr_svn157_399"

><td id="399"><a href="#399">399</a></td></tr
><tr id="gr_svn157_400"

><td id="400"><a href="#400">400</a></td></tr
><tr id="gr_svn157_401"

><td id="401"><a href="#401">401</a></td></tr
><tr id="gr_svn157_402"

><td id="402"><a href="#402">402</a></td></tr
><tr id="gr_svn157_403"

><td id="403"><a href="#403">403</a></td></tr
><tr id="gr_svn157_404"

><td id="404"><a href="#404">404</a></td></tr
><tr id="gr_svn157_405"

><td id="405"><a href="#405">405</a></td></tr
><tr id="gr_svn157_406"

><td id="406"><a href="#406">406</a></td></tr
><tr id="gr_svn157_407"

><td id="407"><a href="#407">407</a></td></tr
><tr id="gr_svn157_408"

><td id="408"><a href="#408">408</a></td></tr
><tr id="gr_svn157_409"

><td id="409"><a href="#409">409</a></td></tr
><tr id="gr_svn157_410"

><td id="410"><a href="#410">410</a></td></tr
><tr id="gr_svn157_411"

><td id="411"><a href="#411">411</a></td></tr
><tr id="gr_svn157_412"

><td id="412"><a href="#412">412</a></td></tr
><tr id="gr_svn157_413"

><td id="413"><a href="#413">413</a></td></tr
><tr id="gr_svn157_414"

><td id="414"><a href="#414">414</a></td></tr
><tr id="gr_svn157_415"

><td id="415"><a href="#415">415</a></td></tr
><tr id="gr_svn157_416"

><td id="416"><a href="#416">416</a></td></tr
><tr id="gr_svn157_417"

><td id="417"><a href="#417">417</a></td></tr
><tr id="gr_svn157_418"

><td id="418"><a href="#418">418</a></td></tr
><tr id="gr_svn157_419"

><td id="419"><a href="#419">419</a></td></tr
><tr id="gr_svn157_420"

><td id="420"><a href="#420">420</a></td></tr
><tr id="gr_svn157_421"

><td id="421"><a href="#421">421</a></td></tr
><tr id="gr_svn157_422"

><td id="422"><a href="#422">422</a></td></tr
><tr id="gr_svn157_423"

><td id="423"><a href="#423">423</a></td></tr
><tr id="gr_svn157_424"

><td id="424"><a href="#424">424</a></td></tr
><tr id="gr_svn157_425"

><td id="425"><a href="#425">425</a></td></tr
><tr id="gr_svn157_426"

><td id="426"><a href="#426">426</a></td></tr
><tr id="gr_svn157_427"

><td id="427"><a href="#427">427</a></td></tr
><tr id="gr_svn157_428"

><td id="428"><a href="#428">428</a></td></tr
><tr id="gr_svn157_429"

><td id="429"><a href="#429">429</a></td></tr
><tr id="gr_svn157_430"

><td id="430"><a href="#430">430</a></td></tr
><tr id="gr_svn157_431"

><td id="431"><a href="#431">431</a></td></tr
><tr id="gr_svn157_432"

><td id="432"><a href="#432">432</a></td></tr
><tr id="gr_svn157_433"

><td id="433"><a href="#433">433</a></td></tr
><tr id="gr_svn157_434"

><td id="434"><a href="#434">434</a></td></tr
><tr id="gr_svn157_435"

><td id="435"><a href="#435">435</a></td></tr
><tr id="gr_svn157_436"

><td id="436"><a href="#436">436</a></td></tr
><tr id="gr_svn157_437"

><td id="437"><a href="#437">437</a></td></tr
><tr id="gr_svn157_438"

><td id="438"><a href="#438">438</a></td></tr
><tr id="gr_svn157_439"

><td id="439"><a href="#439">439</a></td></tr
><tr id="gr_svn157_440"

><td id="440"><a href="#440">440</a></td></tr
><tr id="gr_svn157_441"

><td id="441"><a href="#441">441</a></td></tr
><tr id="gr_svn157_442"

><td id="442"><a href="#442">442</a></td></tr
><tr id="gr_svn157_443"

><td id="443"><a href="#443">443</a></td></tr
><tr id="gr_svn157_444"

><td id="444"><a href="#444">444</a></td></tr
><tr id="gr_svn157_445"

><td id="445"><a href="#445">445</a></td></tr
><tr id="gr_svn157_446"

><td id="446"><a href="#446">446</a></td></tr
><tr id="gr_svn157_447"

><td id="447"><a href="#447">447</a></td></tr
><tr id="gr_svn157_448"

><td id="448"><a href="#448">448</a></td></tr
><tr id="gr_svn157_449"

><td id="449"><a href="#449">449</a></td></tr
><tr id="gr_svn157_450"

><td id="450"><a href="#450">450</a></td></tr
><tr id="gr_svn157_451"

><td id="451"><a href="#451">451</a></td></tr
><tr id="gr_svn157_452"

><td id="452"><a href="#452">452</a></td></tr
><tr id="gr_svn157_453"

><td id="453"><a href="#453">453</a></td></tr
><tr id="gr_svn157_454"

><td id="454"><a href="#454">454</a></td></tr
><tr id="gr_svn157_455"

><td id="455"><a href="#455">455</a></td></tr
><tr id="gr_svn157_456"

><td id="456"><a href="#456">456</a></td></tr
><tr id="gr_svn157_457"

><td id="457"><a href="#457">457</a></td></tr
><tr id="gr_svn157_458"

><td id="458"><a href="#458">458</a></td></tr
><tr id="gr_svn157_459"

><td id="459"><a href="#459">459</a></td></tr
><tr id="gr_svn157_460"

><td id="460"><a href="#460">460</a></td></tr
><tr id="gr_svn157_461"

><td id="461"><a href="#461">461</a></td></tr
><tr id="gr_svn157_462"

><td id="462"><a href="#462">462</a></td></tr
><tr id="gr_svn157_463"

><td id="463"><a href="#463">463</a></td></tr
><tr id="gr_svn157_464"

><td id="464"><a href="#464">464</a></td></tr
><tr id="gr_svn157_465"

><td id="465"><a href="#465">465</a></td></tr
><tr id="gr_svn157_466"

><td id="466"><a href="#466">466</a></td></tr
><tr id="gr_svn157_467"

><td id="467"><a href="#467">467</a></td></tr
><tr id="gr_svn157_468"

><td id="468"><a href="#468">468</a></td></tr
><tr id="gr_svn157_469"

><td id="469"><a href="#469">469</a></td></tr
><tr id="gr_svn157_470"

><td id="470"><a href="#470">470</a></td></tr
><tr id="gr_svn157_471"

><td id="471"><a href="#471">471</a></td></tr
><tr id="gr_svn157_472"

><td id="472"><a href="#472">472</a></td></tr
><tr id="gr_svn157_473"

><td id="473"><a href="#473">473</a></td></tr
><tr id="gr_svn157_474"

><td id="474"><a href="#474">474</a></td></tr
><tr id="gr_svn157_475"

><td id="475"><a href="#475">475</a></td></tr
><tr id="gr_svn157_476"

><td id="476"><a href="#476">476</a></td></tr
><tr id="gr_svn157_477"

><td id="477"><a href="#477">477</a></td></tr
><tr id="gr_svn157_478"

><td id="478"><a href="#478">478</a></td></tr
><tr id="gr_svn157_479"

><td id="479"><a href="#479">479</a></td></tr
><tr id="gr_svn157_480"

><td id="480"><a href="#480">480</a></td></tr
><tr id="gr_svn157_481"

><td id="481"><a href="#481">481</a></td></tr
><tr id="gr_svn157_482"

><td id="482"><a href="#482">482</a></td></tr
><tr id="gr_svn157_483"

><td id="483"><a href="#483">483</a></td></tr
><tr id="gr_svn157_484"

><td id="484"><a href="#484">484</a></td></tr
><tr id="gr_svn157_485"

><td id="485"><a href="#485">485</a></td></tr
><tr id="gr_svn157_486"

><td id="486"><a href="#486">486</a></td></tr
><tr id="gr_svn157_487"

><td id="487"><a href="#487">487</a></td></tr
><tr id="gr_svn157_488"

><td id="488"><a href="#488">488</a></td></tr
><tr id="gr_svn157_489"

><td id="489"><a href="#489">489</a></td></tr
><tr id="gr_svn157_490"

><td id="490"><a href="#490">490</a></td></tr
><tr id="gr_svn157_491"

><td id="491"><a href="#491">491</a></td></tr
><tr id="gr_svn157_492"

><td id="492"><a href="#492">492</a></td></tr
><tr id="gr_svn157_493"

><td id="493"><a href="#493">493</a></td></tr
><tr id="gr_svn157_494"

><td id="494"><a href="#494">494</a></td></tr
><tr id="gr_svn157_495"

><td id="495"><a href="#495">495</a></td></tr
><tr id="gr_svn157_496"

><td id="496"><a href="#496">496</a></td></tr
><tr id="gr_svn157_497"

><td id="497"><a href="#497">497</a></td></tr
><tr id="gr_svn157_498"

><td id="498"><a href="#498">498</a></td></tr
><tr id="gr_svn157_499"

><td id="499"><a href="#499">499</a></td></tr
><tr id="gr_svn157_500"

><td id="500"><a href="#500">500</a></td></tr
><tr id="gr_svn157_501"

><td id="501"><a href="#501">501</a></td></tr
><tr id="gr_svn157_502"

><td id="502"><a href="#502">502</a></td></tr
><tr id="gr_svn157_503"

><td id="503"><a href="#503">503</a></td></tr
><tr id="gr_svn157_504"

><td id="504"><a href="#504">504</a></td></tr
><tr id="gr_svn157_505"

><td id="505"><a href="#505">505</a></td></tr
><tr id="gr_svn157_506"

><td id="506"><a href="#506">506</a></td></tr
><tr id="gr_svn157_507"

><td id="507"><a href="#507">507</a></td></tr
><tr id="gr_svn157_508"

><td id="508"><a href="#508">508</a></td></tr
><tr id="gr_svn157_509"

><td id="509"><a href="#509">509</a></td></tr
><tr id="gr_svn157_510"

><td id="510"><a href="#510">510</a></td></tr
><tr id="gr_svn157_511"

><td id="511"><a href="#511">511</a></td></tr
><tr id="gr_svn157_512"

><td id="512"><a href="#512">512</a></td></tr
><tr id="gr_svn157_513"

><td id="513"><a href="#513">513</a></td></tr
><tr id="gr_svn157_514"

><td id="514"><a href="#514">514</a></td></tr
><tr id="gr_svn157_515"

><td id="515"><a href="#515">515</a></td></tr
><tr id="gr_svn157_516"

><td id="516"><a href="#516">516</a></td></tr
><tr id="gr_svn157_517"

><td id="517"><a href="#517">517</a></td></tr
><tr id="gr_svn157_518"

><td id="518"><a href="#518">518</a></td></tr
><tr id="gr_svn157_519"

><td id="519"><a href="#519">519</a></td></tr
><tr id="gr_svn157_520"

><td id="520"><a href="#520">520</a></td></tr
><tr id="gr_svn157_521"

><td id="521"><a href="#521">521</a></td></tr
><tr id="gr_svn157_522"

><td id="522"><a href="#522">522</a></td></tr
><tr id="gr_svn157_523"

><td id="523"><a href="#523">523</a></td></tr
><tr id="gr_svn157_524"

><td id="524"><a href="#524">524</a></td></tr
><tr id="gr_svn157_525"

><td id="525"><a href="#525">525</a></td></tr
><tr id="gr_svn157_526"

><td id="526"><a href="#526">526</a></td></tr
><tr id="gr_svn157_527"

><td id="527"><a href="#527">527</a></td></tr
><tr id="gr_svn157_528"

><td id="528"><a href="#528">528</a></td></tr
><tr id="gr_svn157_529"

><td id="529"><a href="#529">529</a></td></tr
><tr id="gr_svn157_530"

><td id="530"><a href="#530">530</a></td></tr
><tr id="gr_svn157_531"

><td id="531"><a href="#531">531</a></td></tr
><tr id="gr_svn157_532"

><td id="532"><a href="#532">532</a></td></tr
><tr id="gr_svn157_533"

><td id="533"><a href="#533">533</a></td></tr
><tr id="gr_svn157_534"

><td id="534"><a href="#534">534</a></td></tr
><tr id="gr_svn157_535"

><td id="535"><a href="#535">535</a></td></tr
><tr id="gr_svn157_536"

><td id="536"><a href="#536">536</a></td></tr
><tr id="gr_svn157_537"

><td id="537"><a href="#537">537</a></td></tr
><tr id="gr_svn157_538"

><td id="538"><a href="#538">538</a></td></tr
><tr id="gr_svn157_539"

><td id="539"><a href="#539">539</a></td></tr
><tr id="gr_svn157_540"

><td id="540"><a href="#540">540</a></td></tr
><tr id="gr_svn157_541"

><td id="541"><a href="#541">541</a></td></tr
><tr id="gr_svn157_542"

><td id="542"><a href="#542">542</a></td></tr
><tr id="gr_svn157_543"

><td id="543"><a href="#543">543</a></td></tr
><tr id="gr_svn157_544"

><td id="544"><a href="#544">544</a></td></tr
><tr id="gr_svn157_545"

><td id="545"><a href="#545">545</a></td></tr
><tr id="gr_svn157_546"

><td id="546"><a href="#546">546</a></td></tr
><tr id="gr_svn157_547"

><td id="547"><a href="#547">547</a></td></tr
><tr id="gr_svn157_548"

><td id="548"><a href="#548">548</a></td></tr
><tr id="gr_svn157_549"

><td id="549"><a href="#549">549</a></td></tr
><tr id="gr_svn157_550"

><td id="550"><a href="#550">550</a></td></tr
><tr id="gr_svn157_551"

><td id="551"><a href="#551">551</a></td></tr
><tr id="gr_svn157_552"

><td id="552"><a href="#552">552</a></td></tr
><tr id="gr_svn157_553"

><td id="553"><a href="#553">553</a></td></tr
><tr id="gr_svn157_554"

><td id="554"><a href="#554">554</a></td></tr
><tr id="gr_svn157_555"

><td id="555"><a href="#555">555</a></td></tr
><tr id="gr_svn157_556"

><td id="556"><a href="#556">556</a></td></tr
><tr id="gr_svn157_557"

><td id="557"><a href="#557">557</a></td></tr
><tr id="gr_svn157_558"

><td id="558"><a href="#558">558</a></td></tr
><tr id="gr_svn157_559"

><td id="559"><a href="#559">559</a></td></tr
><tr id="gr_svn157_560"

><td id="560"><a href="#560">560</a></td></tr
><tr id="gr_svn157_561"

><td id="561"><a href="#561">561</a></td></tr
><tr id="gr_svn157_562"

><td id="562"><a href="#562">562</a></td></tr
><tr id="gr_svn157_563"

><td id="563"><a href="#563">563</a></td></tr
><tr id="gr_svn157_564"

><td id="564"><a href="#564">564</a></td></tr
><tr id="gr_svn157_565"

><td id="565"><a href="#565">565</a></td></tr
><tr id="gr_svn157_566"

><td id="566"><a href="#566">566</a></td></tr
><tr id="gr_svn157_567"

><td id="567"><a href="#567">567</a></td></tr
><tr id="gr_svn157_568"

><td id="568"><a href="#568">568</a></td></tr
><tr id="gr_svn157_569"

><td id="569"><a href="#569">569</a></td></tr
><tr id="gr_svn157_570"

><td id="570"><a href="#570">570</a></td></tr
><tr id="gr_svn157_571"

><td id="571"><a href="#571">571</a></td></tr
><tr id="gr_svn157_572"

><td id="572"><a href="#572">572</a></td></tr
><tr id="gr_svn157_573"

><td id="573"><a href="#573">573</a></td></tr
><tr id="gr_svn157_574"

><td id="574"><a href="#574">574</a></td></tr
><tr id="gr_svn157_575"

><td id="575"><a href="#575">575</a></td></tr
><tr id="gr_svn157_576"

><td id="576"><a href="#576">576</a></td></tr
><tr id="gr_svn157_577"

><td id="577"><a href="#577">577</a></td></tr
><tr id="gr_svn157_578"

><td id="578"><a href="#578">578</a></td></tr
><tr id="gr_svn157_579"

><td id="579"><a href="#579">579</a></td></tr
><tr id="gr_svn157_580"

><td id="580"><a href="#580">580</a></td></tr
><tr id="gr_svn157_581"

><td id="581"><a href="#581">581</a></td></tr
><tr id="gr_svn157_582"

><td id="582"><a href="#582">582</a></td></tr
><tr id="gr_svn157_583"

><td id="583"><a href="#583">583</a></td></tr
><tr id="gr_svn157_584"

><td id="584"><a href="#584">584</a></td></tr
><tr id="gr_svn157_585"

><td id="585"><a href="#585">585</a></td></tr
><tr id="gr_svn157_586"

><td id="586"><a href="#586">586</a></td></tr
><tr id="gr_svn157_587"

><td id="587"><a href="#587">587</a></td></tr
><tr id="gr_svn157_588"

><td id="588"><a href="#588">588</a></td></tr
><tr id="gr_svn157_589"

><td id="589"><a href="#589">589</a></td></tr
><tr id="gr_svn157_590"

><td id="590"><a href="#590">590</a></td></tr
><tr id="gr_svn157_591"

><td id="591"><a href="#591">591</a></td></tr
><tr id="gr_svn157_592"

><td id="592"><a href="#592">592</a></td></tr
><tr id="gr_svn157_593"

><td id="593"><a href="#593">593</a></td></tr
><tr id="gr_svn157_594"

><td id="594"><a href="#594">594</a></td></tr
><tr id="gr_svn157_595"

><td id="595"><a href="#595">595</a></td></tr
><tr id="gr_svn157_596"

><td id="596"><a href="#596">596</a></td></tr
><tr id="gr_svn157_597"

><td id="597"><a href="#597">597</a></td></tr
><tr id="gr_svn157_598"

><td id="598"><a href="#598">598</a></td></tr
><tr id="gr_svn157_599"

><td id="599"><a href="#599">599</a></td></tr
><tr id="gr_svn157_600"

><td id="600"><a href="#600">600</a></td></tr
><tr id="gr_svn157_601"

><td id="601"><a href="#601">601</a></td></tr
><tr id="gr_svn157_602"

><td id="602"><a href="#602">602</a></td></tr
><tr id="gr_svn157_603"

><td id="603"><a href="#603">603</a></td></tr
><tr id="gr_svn157_604"

><td id="604"><a href="#604">604</a></td></tr
><tr id="gr_svn157_605"

><td id="605"><a href="#605">605</a></td></tr
><tr id="gr_svn157_606"

><td id="606"><a href="#606">606</a></td></tr
><tr id="gr_svn157_607"

><td id="607"><a href="#607">607</a></td></tr
><tr id="gr_svn157_608"

><td id="608"><a href="#608">608</a></td></tr
><tr id="gr_svn157_609"

><td id="609"><a href="#609">609</a></td></tr
><tr id="gr_svn157_610"

><td id="610"><a href="#610">610</a></td></tr
><tr id="gr_svn157_611"

><td id="611"><a href="#611">611</a></td></tr
><tr id="gr_svn157_612"

><td id="612"><a href="#612">612</a></td></tr
><tr id="gr_svn157_613"

><td id="613"><a href="#613">613</a></td></tr
><tr id="gr_svn157_614"

><td id="614"><a href="#614">614</a></td></tr
><tr id="gr_svn157_615"

><td id="615"><a href="#615">615</a></td></tr
><tr id="gr_svn157_616"

><td id="616"><a href="#616">616</a></td></tr
><tr id="gr_svn157_617"

><td id="617"><a href="#617">617</a></td></tr
><tr id="gr_svn157_618"

><td id="618"><a href="#618">618</a></td></tr
><tr id="gr_svn157_619"

><td id="619"><a href="#619">619</a></td></tr
><tr id="gr_svn157_620"

><td id="620"><a href="#620">620</a></td></tr
><tr id="gr_svn157_621"

><td id="621"><a href="#621">621</a></td></tr
><tr id="gr_svn157_622"

><td id="622"><a href="#622">622</a></td></tr
><tr id="gr_svn157_623"

><td id="623"><a href="#623">623</a></td></tr
><tr id="gr_svn157_624"

><td id="624"><a href="#624">624</a></td></tr
><tr id="gr_svn157_625"

><td id="625"><a href="#625">625</a></td></tr
><tr id="gr_svn157_626"

><td id="626"><a href="#626">626</a></td></tr
><tr id="gr_svn157_627"

><td id="627"><a href="#627">627</a></td></tr
><tr id="gr_svn157_628"

><td id="628"><a href="#628">628</a></td></tr
><tr id="gr_svn157_629"

><td id="629"><a href="#629">629</a></td></tr
><tr id="gr_svn157_630"

><td id="630"><a href="#630">630</a></td></tr
><tr id="gr_svn157_631"

><td id="631"><a href="#631">631</a></td></tr
><tr id="gr_svn157_632"

><td id="632"><a href="#632">632</a></td></tr
><tr id="gr_svn157_633"

><td id="633"><a href="#633">633</a></td></tr
><tr id="gr_svn157_634"

><td id="634"><a href="#634">634</a></td></tr
><tr id="gr_svn157_635"

><td id="635"><a href="#635">635</a></td></tr
><tr id="gr_svn157_636"

><td id="636"><a href="#636">636</a></td></tr
><tr id="gr_svn157_637"

><td id="637"><a href="#637">637</a></td></tr
><tr id="gr_svn157_638"

><td id="638"><a href="#638">638</a></td></tr
><tr id="gr_svn157_639"

><td id="639"><a href="#639">639</a></td></tr
><tr id="gr_svn157_640"

><td id="640"><a href="#640">640</a></td></tr
><tr id="gr_svn157_641"

><td id="641"><a href="#641">641</a></td></tr
><tr id="gr_svn157_642"

><td id="642"><a href="#642">642</a></td></tr
><tr id="gr_svn157_643"

><td id="643"><a href="#643">643</a></td></tr
><tr id="gr_svn157_644"

><td id="644"><a href="#644">644</a></td></tr
><tr id="gr_svn157_645"

><td id="645"><a href="#645">645</a></td></tr
><tr id="gr_svn157_646"

><td id="646"><a href="#646">646</a></td></tr
><tr id="gr_svn157_647"

><td id="647"><a href="#647">647</a></td></tr
><tr id="gr_svn157_648"

><td id="648"><a href="#648">648</a></td></tr
><tr id="gr_svn157_649"

><td id="649"><a href="#649">649</a></td></tr
><tr id="gr_svn157_650"

><td id="650"><a href="#650">650</a></td></tr
><tr id="gr_svn157_651"

><td id="651"><a href="#651">651</a></td></tr
><tr id="gr_svn157_652"

><td id="652"><a href="#652">652</a></td></tr
><tr id="gr_svn157_653"

><td id="653"><a href="#653">653</a></td></tr
><tr id="gr_svn157_654"

><td id="654"><a href="#654">654</a></td></tr
><tr id="gr_svn157_655"

><td id="655"><a href="#655">655</a></td></tr
><tr id="gr_svn157_656"

><td id="656"><a href="#656">656</a></td></tr
><tr id="gr_svn157_657"

><td id="657"><a href="#657">657</a></td></tr
><tr id="gr_svn157_658"

><td id="658"><a href="#658">658</a></td></tr
><tr id="gr_svn157_659"

><td id="659"><a href="#659">659</a></td></tr
><tr id="gr_svn157_660"

><td id="660"><a href="#660">660</a></td></tr
><tr id="gr_svn157_661"

><td id="661"><a href="#661">661</a></td></tr
><tr id="gr_svn157_662"

><td id="662"><a href="#662">662</a></td></tr
><tr id="gr_svn157_663"

><td id="663"><a href="#663">663</a></td></tr
><tr id="gr_svn157_664"

><td id="664"><a href="#664">664</a></td></tr
><tr id="gr_svn157_665"

><td id="665"><a href="#665">665</a></td></tr
><tr id="gr_svn157_666"

><td id="666"><a href="#666">666</a></td></tr
><tr id="gr_svn157_667"

><td id="667"><a href="#667">667</a></td></tr
><tr id="gr_svn157_668"

><td id="668"><a href="#668">668</a></td></tr
><tr id="gr_svn157_669"

><td id="669"><a href="#669">669</a></td></tr
><tr id="gr_svn157_670"

><td id="670"><a href="#670">670</a></td></tr
><tr id="gr_svn157_671"

><td id="671"><a href="#671">671</a></td></tr
><tr id="gr_svn157_672"

><td id="672"><a href="#672">672</a></td></tr
><tr id="gr_svn157_673"

><td id="673"><a href="#673">673</a></td></tr
><tr id="gr_svn157_674"

><td id="674"><a href="#674">674</a></td></tr
><tr id="gr_svn157_675"

><td id="675"><a href="#675">675</a></td></tr
><tr id="gr_svn157_676"

><td id="676"><a href="#676">676</a></td></tr
><tr id="gr_svn157_677"

><td id="677"><a href="#677">677</a></td></tr
><tr id="gr_svn157_678"

><td id="678"><a href="#678">678</a></td></tr
><tr id="gr_svn157_679"

><td id="679"><a href="#679">679</a></td></tr
><tr id="gr_svn157_680"

><td id="680"><a href="#680">680</a></td></tr
><tr id="gr_svn157_681"

><td id="681"><a href="#681">681</a></td></tr
><tr id="gr_svn157_682"

><td id="682"><a href="#682">682</a></td></tr
><tr id="gr_svn157_683"

><td id="683"><a href="#683">683</a></td></tr
><tr id="gr_svn157_684"

><td id="684"><a href="#684">684</a></td></tr
><tr id="gr_svn157_685"

><td id="685"><a href="#685">685</a></td></tr
><tr id="gr_svn157_686"

><td id="686"><a href="#686">686</a></td></tr
><tr id="gr_svn157_687"

><td id="687"><a href="#687">687</a></td></tr
><tr id="gr_svn157_688"

><td id="688"><a href="#688">688</a></td></tr
><tr id="gr_svn157_689"

><td id="689"><a href="#689">689</a></td></tr
><tr id="gr_svn157_690"

><td id="690"><a href="#690">690</a></td></tr
><tr id="gr_svn157_691"

><td id="691"><a href="#691">691</a></td></tr
><tr id="gr_svn157_692"

><td id="692"><a href="#692">692</a></td></tr
><tr id="gr_svn157_693"

><td id="693"><a href="#693">693</a></td></tr
><tr id="gr_svn157_694"

><td id="694"><a href="#694">694</a></td></tr
><tr id="gr_svn157_695"

><td id="695"><a href="#695">695</a></td></tr
><tr id="gr_svn157_696"

><td id="696"><a href="#696">696</a></td></tr
><tr id="gr_svn157_697"

><td id="697"><a href="#697">697</a></td></tr
><tr id="gr_svn157_698"

><td id="698"><a href="#698">698</a></td></tr
><tr id="gr_svn157_699"

><td id="699"><a href="#699">699</a></td></tr
><tr id="gr_svn157_700"

><td id="700"><a href="#700">700</a></td></tr
><tr id="gr_svn157_701"

><td id="701"><a href="#701">701</a></td></tr
><tr id="gr_svn157_702"

><td id="702"><a href="#702">702</a></td></tr
><tr id="gr_svn157_703"

><td id="703"><a href="#703">703</a></td></tr
><tr id="gr_svn157_704"

><td id="704"><a href="#704">704</a></td></tr
><tr id="gr_svn157_705"

><td id="705"><a href="#705">705</a></td></tr
><tr id="gr_svn157_706"

><td id="706"><a href="#706">706</a></td></tr
><tr id="gr_svn157_707"

><td id="707"><a href="#707">707</a></td></tr
><tr id="gr_svn157_708"

><td id="708"><a href="#708">708</a></td></tr
><tr id="gr_svn157_709"

><td id="709"><a href="#709">709</a></td></tr
><tr id="gr_svn157_710"

><td id="710"><a href="#710">710</a></td></tr
><tr id="gr_svn157_711"

><td id="711"><a href="#711">711</a></td></tr
><tr id="gr_svn157_712"

><td id="712"><a href="#712">712</a></td></tr
><tr id="gr_svn157_713"

><td id="713"><a href="#713">713</a></td></tr
><tr id="gr_svn157_714"

><td id="714"><a href="#714">714</a></td></tr
><tr id="gr_svn157_715"

><td id="715"><a href="#715">715</a></td></tr
><tr id="gr_svn157_716"

><td id="716"><a href="#716">716</a></td></tr
><tr id="gr_svn157_717"

><td id="717"><a href="#717">717</a></td></tr
><tr id="gr_svn157_718"

><td id="718"><a href="#718">718</a></td></tr
><tr id="gr_svn157_719"

><td id="719"><a href="#719">719</a></td></tr
><tr id="gr_svn157_720"

><td id="720"><a href="#720">720</a></td></tr
><tr id="gr_svn157_721"

><td id="721"><a href="#721">721</a></td></tr
><tr id="gr_svn157_722"

><td id="722"><a href="#722">722</a></td></tr
><tr id="gr_svn157_723"

><td id="723"><a href="#723">723</a></td></tr
><tr id="gr_svn157_724"

><td id="724"><a href="#724">724</a></td></tr
><tr id="gr_svn157_725"

><td id="725"><a href="#725">725</a></td></tr
><tr id="gr_svn157_726"

><td id="726"><a href="#726">726</a></td></tr
><tr id="gr_svn157_727"

><td id="727"><a href="#727">727</a></td></tr
><tr id="gr_svn157_728"

><td id="728"><a href="#728">728</a></td></tr
><tr id="gr_svn157_729"

><td id="729"><a href="#729">729</a></td></tr
><tr id="gr_svn157_730"

><td id="730"><a href="#730">730</a></td></tr
><tr id="gr_svn157_731"

><td id="731"><a href="#731">731</a></td></tr
><tr id="gr_svn157_732"

><td id="732"><a href="#732">732</a></td></tr
><tr id="gr_svn157_733"

><td id="733"><a href="#733">733</a></td></tr
><tr id="gr_svn157_734"

><td id="734"><a href="#734">734</a></td></tr
><tr id="gr_svn157_735"

><td id="735"><a href="#735">735</a></td></tr
><tr id="gr_svn157_736"

><td id="736"><a href="#736">736</a></td></tr
><tr id="gr_svn157_737"

><td id="737"><a href="#737">737</a></td></tr
><tr id="gr_svn157_738"

><td id="738"><a href="#738">738</a></td></tr
><tr id="gr_svn157_739"

><td id="739"><a href="#739">739</a></td></tr
><tr id="gr_svn157_740"

><td id="740"><a href="#740">740</a></td></tr
><tr id="gr_svn157_741"

><td id="741"><a href="#741">741</a></td></tr
><tr id="gr_svn157_742"

><td id="742"><a href="#742">742</a></td></tr
><tr id="gr_svn157_743"

><td id="743"><a href="#743">743</a></td></tr
><tr id="gr_svn157_744"

><td id="744"><a href="#744">744</a></td></tr
><tr id="gr_svn157_745"

><td id="745"><a href="#745">745</a></td></tr
><tr id="gr_svn157_746"

><td id="746"><a href="#746">746</a></td></tr
><tr id="gr_svn157_747"

><td id="747"><a href="#747">747</a></td></tr
><tr id="gr_svn157_748"

><td id="748"><a href="#748">748</a></td></tr
><tr id="gr_svn157_749"

><td id="749"><a href="#749">749</a></td></tr
><tr id="gr_svn157_750"

><td id="750"><a href="#750">750</a></td></tr
><tr id="gr_svn157_751"

><td id="751"><a href="#751">751</a></td></tr
><tr id="gr_svn157_752"

><td id="752"><a href="#752">752</a></td></tr
><tr id="gr_svn157_753"

><td id="753"><a href="#753">753</a></td></tr
><tr id="gr_svn157_754"

><td id="754"><a href="#754">754</a></td></tr
><tr id="gr_svn157_755"

><td id="755"><a href="#755">755</a></td></tr
><tr id="gr_svn157_756"

><td id="756"><a href="#756">756</a></td></tr
><tr id="gr_svn157_757"

><td id="757"><a href="#757">757</a></td></tr
><tr id="gr_svn157_758"

><td id="758"><a href="#758">758</a></td></tr
><tr id="gr_svn157_759"

><td id="759"><a href="#759">759</a></td></tr
><tr id="gr_svn157_760"

><td id="760"><a href="#760">760</a></td></tr
><tr id="gr_svn157_761"

><td id="761"><a href="#761">761</a></td></tr
><tr id="gr_svn157_762"

><td id="762"><a href="#762">762</a></td></tr
><tr id="gr_svn157_763"

><td id="763"><a href="#763">763</a></td></tr
><tr id="gr_svn157_764"

><td id="764"><a href="#764">764</a></td></tr
><tr id="gr_svn157_765"

><td id="765"><a href="#765">765</a></td></tr
><tr id="gr_svn157_766"

><td id="766"><a href="#766">766</a></td></tr
><tr id="gr_svn157_767"

><td id="767"><a href="#767">767</a></td></tr
><tr id="gr_svn157_768"

><td id="768"><a href="#768">768</a></td></tr
><tr id="gr_svn157_769"

><td id="769"><a href="#769">769</a></td></tr
><tr id="gr_svn157_770"

><td id="770"><a href="#770">770</a></td></tr
><tr id="gr_svn157_771"

><td id="771"><a href="#771">771</a></td></tr
><tr id="gr_svn157_772"

><td id="772"><a href="#772">772</a></td></tr
><tr id="gr_svn157_773"

><td id="773"><a href="#773">773</a></td></tr
><tr id="gr_svn157_774"

><td id="774"><a href="#774">774</a></td></tr
><tr id="gr_svn157_775"

><td id="775"><a href="#775">775</a></td></tr
><tr id="gr_svn157_776"

><td id="776"><a href="#776">776</a></td></tr
><tr id="gr_svn157_777"

><td id="777"><a href="#777">777</a></td></tr
><tr id="gr_svn157_778"

><td id="778"><a href="#778">778</a></td></tr
><tr id="gr_svn157_779"

><td id="779"><a href="#779">779</a></td></tr
><tr id="gr_svn157_780"

><td id="780"><a href="#780">780</a></td></tr
><tr id="gr_svn157_781"

><td id="781"><a href="#781">781</a></td></tr
><tr id="gr_svn157_782"

><td id="782"><a href="#782">782</a></td></tr
><tr id="gr_svn157_783"

><td id="783"><a href="#783">783</a></td></tr
><tr id="gr_svn157_784"

><td id="784"><a href="#784">784</a></td></tr
><tr id="gr_svn157_785"

><td id="785"><a href="#785">785</a></td></tr
><tr id="gr_svn157_786"

><td id="786"><a href="#786">786</a></td></tr
><tr id="gr_svn157_787"

><td id="787"><a href="#787">787</a></td></tr
><tr id="gr_svn157_788"

><td id="788"><a href="#788">788</a></td></tr
><tr id="gr_svn157_789"

><td id="789"><a href="#789">789</a></td></tr
><tr id="gr_svn157_790"

><td id="790"><a href="#790">790</a></td></tr
><tr id="gr_svn157_791"

><td id="791"><a href="#791">791</a></td></tr
><tr id="gr_svn157_792"

><td id="792"><a href="#792">792</a></td></tr
><tr id="gr_svn157_793"

><td id="793"><a href="#793">793</a></td></tr
><tr id="gr_svn157_794"

><td id="794"><a href="#794">794</a></td></tr
><tr id="gr_svn157_795"

><td id="795"><a href="#795">795</a></td></tr
><tr id="gr_svn157_796"

><td id="796"><a href="#796">796</a></td></tr
><tr id="gr_svn157_797"

><td id="797"><a href="#797">797</a></td></tr
><tr id="gr_svn157_798"

><td id="798"><a href="#798">798</a></td></tr
><tr id="gr_svn157_799"

><td id="799"><a href="#799">799</a></td></tr
><tr id="gr_svn157_800"

><td id="800"><a href="#800">800</a></td></tr
><tr id="gr_svn157_801"

><td id="801"><a href="#801">801</a></td></tr
><tr id="gr_svn157_802"

><td id="802"><a href="#802">802</a></td></tr
><tr id="gr_svn157_803"

><td id="803"><a href="#803">803</a></td></tr
><tr id="gr_svn157_804"

><td id="804"><a href="#804">804</a></td></tr
><tr id="gr_svn157_805"

><td id="805"><a href="#805">805</a></td></tr
><tr id="gr_svn157_806"

><td id="806"><a href="#806">806</a></td></tr
><tr id="gr_svn157_807"

><td id="807"><a href="#807">807</a></td></tr
><tr id="gr_svn157_808"

><td id="808"><a href="#808">808</a></td></tr
><tr id="gr_svn157_809"

><td id="809"><a href="#809">809</a></td></tr
><tr id="gr_svn157_810"

><td id="810"><a href="#810">810</a></td></tr
><tr id="gr_svn157_811"

><td id="811"><a href="#811">811</a></td></tr
><tr id="gr_svn157_812"

><td id="812"><a href="#812">812</a></td></tr
><tr id="gr_svn157_813"

><td id="813"><a href="#813">813</a></td></tr
><tr id="gr_svn157_814"

><td id="814"><a href="#814">814</a></td></tr
><tr id="gr_svn157_815"

><td id="815"><a href="#815">815</a></td></tr
><tr id="gr_svn157_816"

><td id="816"><a href="#816">816</a></td></tr
><tr id="gr_svn157_817"

><td id="817"><a href="#817">817</a></td></tr
><tr id="gr_svn157_818"

><td id="818"><a href="#818">818</a></td></tr
><tr id="gr_svn157_819"

><td id="819"><a href="#819">819</a></td></tr
><tr id="gr_svn157_820"

><td id="820"><a href="#820">820</a></td></tr
><tr id="gr_svn157_821"

><td id="821"><a href="#821">821</a></td></tr
><tr id="gr_svn157_822"

><td id="822"><a href="#822">822</a></td></tr
><tr id="gr_svn157_823"

><td id="823"><a href="#823">823</a></td></tr
><tr id="gr_svn157_824"

><td id="824"><a href="#824">824</a></td></tr
><tr id="gr_svn157_825"

><td id="825"><a href="#825">825</a></td></tr
><tr id="gr_svn157_826"

><td id="826"><a href="#826">826</a></td></tr
><tr id="gr_svn157_827"

><td id="827"><a href="#827">827</a></td></tr
><tr id="gr_svn157_828"

><td id="828"><a href="#828">828</a></td></tr
><tr id="gr_svn157_829"

><td id="829"><a href="#829">829</a></td></tr
><tr id="gr_svn157_830"

><td id="830"><a href="#830">830</a></td></tr
><tr id="gr_svn157_831"

><td id="831"><a href="#831">831</a></td></tr
><tr id="gr_svn157_832"

><td id="832"><a href="#832">832</a></td></tr
><tr id="gr_svn157_833"

><td id="833"><a href="#833">833</a></td></tr
><tr id="gr_svn157_834"

><td id="834"><a href="#834">834</a></td></tr
><tr id="gr_svn157_835"

><td id="835"><a href="#835">835</a></td></tr
><tr id="gr_svn157_836"

><td id="836"><a href="#836">836</a></td></tr
><tr id="gr_svn157_837"

><td id="837"><a href="#837">837</a></td></tr
><tr id="gr_svn157_838"

><td id="838"><a href="#838">838</a></td></tr
><tr id="gr_svn157_839"

><td id="839"><a href="#839">839</a></td></tr
><tr id="gr_svn157_840"

><td id="840"><a href="#840">840</a></td></tr
><tr id="gr_svn157_841"

><td id="841"><a href="#841">841</a></td></tr
><tr id="gr_svn157_842"

><td id="842"><a href="#842">842</a></td></tr
><tr id="gr_svn157_843"

><td id="843"><a href="#843">843</a></td></tr
><tr id="gr_svn157_844"

><td id="844"><a href="#844">844</a></td></tr
><tr id="gr_svn157_845"

><td id="845"><a href="#845">845</a></td></tr
><tr id="gr_svn157_846"

><td id="846"><a href="#846">846</a></td></tr
><tr id="gr_svn157_847"

><td id="847"><a href="#847">847</a></td></tr
><tr id="gr_svn157_848"

><td id="848"><a href="#848">848</a></td></tr
><tr id="gr_svn157_849"

><td id="849"><a href="#849">849</a></td></tr
><tr id="gr_svn157_850"

><td id="850"><a href="#850">850</a></td></tr
><tr id="gr_svn157_851"

><td id="851"><a href="#851">851</a></td></tr
><tr id="gr_svn157_852"

><td id="852"><a href="#852">852</a></td></tr
><tr id="gr_svn157_853"

><td id="853"><a href="#853">853</a></td></tr
><tr id="gr_svn157_854"

><td id="854"><a href="#854">854</a></td></tr
><tr id="gr_svn157_855"

><td id="855"><a href="#855">855</a></td></tr
><tr id="gr_svn157_856"

><td id="856"><a href="#856">856</a></td></tr
><tr id="gr_svn157_857"

><td id="857"><a href="#857">857</a></td></tr
><tr id="gr_svn157_858"

><td id="858"><a href="#858">858</a></td></tr
><tr id="gr_svn157_859"

><td id="859"><a href="#859">859</a></td></tr
><tr id="gr_svn157_860"

><td id="860"><a href="#860">860</a></td></tr
><tr id="gr_svn157_861"

><td id="861"><a href="#861">861</a></td></tr
><tr id="gr_svn157_862"

><td id="862"><a href="#862">862</a></td></tr
><tr id="gr_svn157_863"

><td id="863"><a href="#863">863</a></td></tr
><tr id="gr_svn157_864"

><td id="864"><a href="#864">864</a></td></tr
><tr id="gr_svn157_865"

><td id="865"><a href="#865">865</a></td></tr
><tr id="gr_svn157_866"

><td id="866"><a href="#866">866</a></td></tr
><tr id="gr_svn157_867"

><td id="867"><a href="#867">867</a></td></tr
><tr id="gr_svn157_868"

><td id="868"><a href="#868">868</a></td></tr
><tr id="gr_svn157_869"

><td id="869"><a href="#869">869</a></td></tr
><tr id="gr_svn157_870"

><td id="870"><a href="#870">870</a></td></tr
><tr id="gr_svn157_871"

><td id="871"><a href="#871">871</a></td></tr
><tr id="gr_svn157_872"

><td id="872"><a href="#872">872</a></td></tr
><tr id="gr_svn157_873"

><td id="873"><a href="#873">873</a></td></tr
><tr id="gr_svn157_874"

><td id="874"><a href="#874">874</a></td></tr
><tr id="gr_svn157_875"

><td id="875"><a href="#875">875</a></td></tr
><tr id="gr_svn157_876"

><td id="876"><a href="#876">876</a></td></tr
><tr id="gr_svn157_877"

><td id="877"><a href="#877">877</a></td></tr
><tr id="gr_svn157_878"

><td id="878"><a href="#878">878</a></td></tr
><tr id="gr_svn157_879"

><td id="879"><a href="#879">879</a></td></tr
><tr id="gr_svn157_880"

><td id="880"><a href="#880">880</a></td></tr
><tr id="gr_svn157_881"

><td id="881"><a href="#881">881</a></td></tr
><tr id="gr_svn157_882"

><td id="882"><a href="#882">882</a></td></tr
><tr id="gr_svn157_883"

><td id="883"><a href="#883">883</a></td></tr
><tr id="gr_svn157_884"

><td id="884"><a href="#884">884</a></td></tr
><tr id="gr_svn157_885"

><td id="885"><a href="#885">885</a></td></tr
><tr id="gr_svn157_886"

><td id="886"><a href="#886">886</a></td></tr
><tr id="gr_svn157_887"

><td id="887"><a href="#887">887</a></td></tr
><tr id="gr_svn157_888"

><td id="888"><a href="#888">888</a></td></tr
><tr id="gr_svn157_889"

><td id="889"><a href="#889">889</a></td></tr
><tr id="gr_svn157_890"

><td id="890"><a href="#890">890</a></td></tr
><tr id="gr_svn157_891"

><td id="891"><a href="#891">891</a></td></tr
><tr id="gr_svn157_892"

><td id="892"><a href="#892">892</a></td></tr
><tr id="gr_svn157_893"

><td id="893"><a href="#893">893</a></td></tr
><tr id="gr_svn157_894"

><td id="894"><a href="#894">894</a></td></tr
><tr id="gr_svn157_895"

><td id="895"><a href="#895">895</a></td></tr
><tr id="gr_svn157_896"

><td id="896"><a href="#896">896</a></td></tr
><tr id="gr_svn157_897"

><td id="897"><a href="#897">897</a></td></tr
><tr id="gr_svn157_898"

><td id="898"><a href="#898">898</a></td></tr
><tr id="gr_svn157_899"

><td id="899"><a href="#899">899</a></td></tr
><tr id="gr_svn157_900"

><td id="900"><a href="#900">900</a></td></tr
><tr id="gr_svn157_901"

><td id="901"><a href="#901">901</a></td></tr
><tr id="gr_svn157_902"

><td id="902"><a href="#902">902</a></td></tr
><tr id="gr_svn157_903"

><td id="903"><a href="#903">903</a></td></tr
><tr id="gr_svn157_904"

><td id="904"><a href="#904">904</a></td></tr
><tr id="gr_svn157_905"

><td id="905"><a href="#905">905</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre class="prettyprint"><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint lang-cpp"><table id="src_table_0"><tr
id=sl_svn157_1

><td class="source">// RTF2HTMLConverter.cpp: implementation of the CRTF_HTMLConverter class.<br></td></tr
><tr
id=sl_svn157_2

><td class="source">//<br></td></tr
><tr
id=sl_svn157_3

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn157_4

><td class="source"><br></td></tr
><tr
id=sl_svn157_5

><td class="source">#include &quot;stdafx.h&quot;<br></td></tr
><tr
id=sl_svn157_6

><td class="source">#include &quot;RTF2HTMLTree.h&quot;<br></td></tr
><tr
id=sl_svn157_7

><td class="source">#include &quot;RTF2HTMLConverter.h&quot;<br></td></tr
><tr
id=sl_svn157_8

><td class="source">#include &quot;Util.h&quot;<br></td></tr
><tr
id=sl_svn157_9

><td class="source"><br></td></tr
><tr
id=sl_svn157_10

><td class="source">#include &quot;..\..\shared\HtmlCharMap.h&quot;<br></td></tr
><tr
id=sl_svn157_11

><td class="source">#include &quot;..\..\shared\misc.h&quot;<br></td></tr
><tr
id=sl_svn157_12

><td class="source"><br></td></tr
><tr
id=sl_svn157_13

><td class="source">#ifdef _DEBUG<br></td></tr
><tr
id=sl_svn157_14

><td class="source">#undef THIS_FILE<br></td></tr
><tr
id=sl_svn157_15

><td class="source">static char THIS_FILE[]=__FILE__;<br></td></tr
><tr
id=sl_svn157_16

><td class="source">#define new DEBUG_NEW<br></td></tr
><tr
id=sl_svn157_17

><td class="source">#endif<br></td></tr
><tr
id=sl_svn157_18

><td class="source"><br></td></tr
><tr
id=sl_svn157_19

><td class="source">const LPCTSTR MULTIBYTETAG = &quot;\\&#39;&quot;;<br></td></tr
><tr
id=sl_svn157_20

><td class="source"><br></td></tr
><tr
id=sl_svn157_21

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn157_22

><td class="source">// Construction/Destruction<br></td></tr
><tr
id=sl_svn157_23

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn157_24

><td class="source"><br></td></tr
><tr
id=sl_svn157_25

><td class="source">CRTF_HTMLConverter::CRTF_HTMLConverter(TMode enMode)<br></td></tr
><tr
id=sl_svn157_26

><td class="source">{<br></td></tr
><tr
id=sl_svn157_27

><td class="source">	ASSERT(enMode==c_modRTF2HTML); //vice versa unsupported at the moment<br></td></tr
><tr
id=sl_svn157_28

><td class="source">	m_enMode = enMode;<br></td></tr
><tr
id=sl_svn157_29

><td class="source">	m_RTFTree = new CRTFTree;<br></td></tr
><tr
id=sl_svn157_30

><td class="source">	m_strTitle   = &quot;RTF2HTML Generated Document&quot;;<br></td></tr
><tr
id=sl_svn157_31

><td class="source">	ResetMetaData();<br></td></tr
><tr
id=sl_svn157_32

><td class="source">}<br></td></tr
><tr
id=sl_svn157_33

><td class="source"><br></td></tr
><tr
id=sl_svn157_34

><td class="source">CRTF_HTMLConverter::~CRTF_HTMLConverter()<br></td></tr
><tr
id=sl_svn157_35

><td class="source">{<br></td></tr
><tr
id=sl_svn157_36

><td class="source">	delete m_RTFTree;<br></td></tr
><tr
id=sl_svn157_37

><td class="source">	ResetMetaData();<br></td></tr
><tr
id=sl_svn157_38

><td class="source">}<br></td></tr
><tr
id=sl_svn157_39

><td class="source"><br></td></tr
><tr
id=sl_svn157_40

><td class="source">void CRTF_HTMLConverter::SetTitle(const CString&amp; strTitle)<br></td></tr
><tr
id=sl_svn157_41

><td class="source">{<br></td></tr
><tr
id=sl_svn157_42

><td class="source">	m_strTitle = strTitle;<br></td></tr
><tr
id=sl_svn157_43

><td class="source">}<br></td></tr
><tr
id=sl_svn157_44

><td class="source"><br></td></tr
><tr
id=sl_svn157_45

><td class="source">void CRTF_HTMLConverter::ResetMetaData()<br></td></tr
><tr
id=sl_svn157_46

><td class="source">{<br></td></tr
><tr
id=sl_svn157_47

><td class="source">	m_strCharset = &quot;1252&quot;;<br></td></tr
><tr
id=sl_svn157_48

><td class="source">	m_strActFontColor = &quot;#000000&quot;;<br></td></tr
><tr
id=sl_svn157_49

><td class="source">	m_strActFontName = &quot;Arial&quot;;<br></td></tr
><tr
id=sl_svn157_50

><td class="source">	m_strActFontSize = &quot;10&quot;;<br></td></tr
><tr
id=sl_svn157_51

><td class="source">	m_mapFontNames.RemoveAll();<br></td></tr
><tr
id=sl_svn157_52

><td class="source">	m_arrColors.RemoveAll();<br></td></tr
><tr
id=sl_svn157_53

><td class="source">	//   m_bTextSinceLastPara = FALSE;<br></td></tr
><tr
id=sl_svn157_54

><td class="source">	<br></td></tr
><tr
id=sl_svn157_55

><td class="source">	for (int i=0;i&lt;m_arrHTMLElements.GetSize();i++) <br></td></tr
><tr
id=sl_svn157_56

><td class="source">		delete m_arrHTMLElements[i];<br></td></tr
><tr
id=sl_svn157_57

><td class="source">	<br></td></tr
><tr
id=sl_svn157_58

><td class="source">	m_arrHTMLElements.RemoveAll();<br></td></tr
><tr
id=sl_svn157_59

><td class="source">}<br></td></tr
><tr
id=sl_svn157_60

><td class="source"><br></td></tr
><tr
id=sl_svn157_61

><td class="source">bool CRTF_HTMLConverter::ConvertRTF2HTML(BOOL bWantHeaderFooter)<br></td></tr
><tr
id=sl_svn157_62

><td class="source">{<br></td></tr
><tr
id=sl_svn157_63

><td class="source">	//Initializing<br></td></tr
><tr
id=sl_svn157_64

><td class="source">	m_strHTML = &quot;&quot;;<br></td></tr
><tr
id=sl_svn157_65

><td class="source">	<br></td></tr
><tr
id=sl_svn157_66

><td class="source">	//Check_Valid_RTF<br></td></tr
><tr
id=sl_svn157_67

><td class="source">	m_strRTF.TrimRight(&quot;\n&quot;);<br></td></tr
><tr
id=sl_svn157_68

><td class="source">	m_strRTF.TrimRight(&quot;\r&quot;);<br></td></tr
><tr
id=sl_svn157_69

><td class="source">	CString strEndChar=m_strRTF.Right(1);   <br></td></tr
><tr
id=sl_svn157_70

><td class="source">	strEndChar;<br></td></tr
><tr
id=sl_svn157_71

><td class="source">	if (!((m_strRTF.GetLength()&gt;=7)&amp;&amp;(m_strRTF.Left(6)==&quot;{\\rtf1&quot;))) <br></td></tr
><tr
id=sl_svn157_72

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_73

><td class="source">		//Invalid RTF file. Must start with &quot;{RTF1&quot; and end with &quot;}&quot;<br></td></tr
><tr
id=sl_svn157_74

><td class="source">		ASSERT(FALSE);<br></td></tr
><tr
id=sl_svn157_75

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn157_76

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_77

><td class="source">	<br></td></tr
><tr
id=sl_svn157_78

><td class="source">	// make sure it ends in a &#39;}&#39;<br></td></tr
><tr
id=sl_svn157_79

><td class="source">	int nLen = m_strRTF.GetLength();<br></td></tr
><tr
id=sl_svn157_80

><td class="source">	<br></td></tr
><tr
id=sl_svn157_81

><td class="source">	while (m_strRTF[nLen - 1] != &#39;}&#39;)<br></td></tr
><tr
id=sl_svn157_82

><td class="source">		nLen--;<br></td></tr
><tr
id=sl_svn157_83

><td class="source">	<br></td></tr
><tr
id=sl_svn157_84

><td class="source">	if (nLen &lt; m_strRTF.GetLength())<br></td></tr
><tr
id=sl_svn157_85

><td class="source">		m_strRTF = m_strRTF.Left(nLen);<br></td></tr
><tr
id=sl_svn157_86

><td class="source">	<br></td></tr
><tr
id=sl_svn157_87

><td class="source">	ASSERT(m_strRTF[nLen - 1] == &#39;}&#39;);<br></td></tr
><tr
id=sl_svn157_88

><td class="source">	<br></td></tr
><tr
id=sl_svn157_89

><td class="source">	//Clear internal members<br></td></tr
><tr
id=sl_svn157_90

><td class="source">	ResetMetaData();<br></td></tr
><tr
id=sl_svn157_91

><td class="source">	<br></td></tr
><tr
id=sl_svn157_92

><td class="source">	//Build up RTF Tree. Each tree in a node coresponds to a {} section in the RTF file (code)<br></td></tr
><tr
id=sl_svn157_93

><td class="source">	//and has a designator (name), like \RTF or \FONTTBL. We start with the whole RTF file<br></td></tr
><tr
id=sl_svn157_94

><td class="source">	//(Section \RTF1)  <br></td></tr
><tr
id=sl_svn157_95

><td class="source">	delete m_RTFTree;<br></td></tr
><tr
id=sl_svn157_96

><td class="source">	m_RTFTree = new CRTFTree;<br></td></tr
><tr
id=sl_svn157_97

><td class="source">	CRTFNode NodeRoot = R2H_BuildTree(m_strRTF);  <br></td></tr
><tr
id=sl_svn157_98

><td class="source">	CString strRTFCode = (NodeRoot)-&gt;m_strThisCode;<br></td></tr
><tr
id=sl_svn157_99

><td class="source">	<br></td></tr
><tr
id=sl_svn157_100

><td class="source">	//Fill internal meta data members<br></td></tr
><tr
id=sl_svn157_101

><td class="source">	R2H_SetMetaData(NodeRoot);   <br></td></tr
><tr
id=sl_svn157_102

><td class="source">	<br></td></tr
><tr
id=sl_svn157_103

><td class="source">	//Create html main body <br></td></tr
><tr
id=sl_svn157_104

><td class="source">	R2H_CreateHTMLElements(strRTFCode);   <br></td></tr
><tr
id=sl_svn157_105

><td class="source">	<br></td></tr
><tr
id=sl_svn157_106

><td class="source">	//HTML Header<br></td></tr
><tr
id=sl_svn157_107

><td class="source">	R2H_GetHTMLElements(m_strHTML);<br></td></tr
><tr
id=sl_svn157_108

><td class="source">	<br></td></tr
><tr
id=sl_svn157_109

><td class="source">	if (bWantHeaderFooter)<br></td></tr
><tr
id=sl_svn157_110

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_111

><td class="source">		R2H_GetHTMLElements(m_strHTML);<br></td></tr
><tr
id=sl_svn157_112

><td class="source">		m_strHTML = R2H_GetHTMLHeader() + m_strHTML + &quot;\r\n&quot; + R2H_GetHTMLFooter();<br></td></tr
><tr
id=sl_svn157_113

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_114

><td class="source">	<br></td></tr
><tr
id=sl_svn157_115

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn157_116

><td class="source">}<br></td></tr
><tr
id=sl_svn157_117

><td class="source"><br></td></tr
><tr
id=sl_svn157_118

><td class="source">bool CRTF_HTMLConverter::Convert(const CString&amp; sRtf, CString&amp; sHtml, BOOL bWantHeaderFooter)<br></td></tr
><tr
id=sl_svn157_119

><td class="source">{<br></td></tr
><tr
id=sl_svn157_120

><td class="source">	CRTF_HTMLConverter r2h(c_modRTF2HTML);<br></td></tr
><tr
id=sl_svn157_121

><td class="source">	<br></td></tr
><tr
id=sl_svn157_122

><td class="source">	r2h.m_strRTF = sRtf;<br></td></tr
><tr
id=sl_svn157_123

><td class="source">	<br></td></tr
><tr
id=sl_svn157_124

><td class="source">	if (r2h.ConvertRTF2HTML(bWantHeaderFooter))<br></td></tr
><tr
id=sl_svn157_125

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_126

><td class="source">		sHtml = r2h.m_strHTML;<br></td></tr
><tr
id=sl_svn157_127

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn157_128

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_129

><td class="source">	<br></td></tr
><tr
id=sl_svn157_130

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn157_131

><td class="source">}<br></td></tr
><tr
id=sl_svn157_132

><td class="source"><br></td></tr
><tr
id=sl_svn157_133

><td class="source">CString CRTF_HTMLConverter::R2H_GetHTMLHeader()<br></td></tr
><tr
id=sl_svn157_134

><td class="source">{<br></td></tr
><tr
id=sl_svn157_135

><td class="source">	CString strHTMLHeader;   <br></td></tr
><tr
id=sl_svn157_136

><td class="source">	strHTMLHeader+= &quot;&lt;!DOCTYPE HTML PUBLIC \&quot;-//W3C//DTD HTML 4.01 Transitional//DE\&quot; \&quot;http://www.w3.org/TR/html4/loose.dtd\&quot;&gt;\r\n&quot;;<br></td></tr
><tr
id=sl_svn157_137

><td class="source">	strHTMLHeader+= &quot;&lt;html&gt;\r\n&quot;;<br></td></tr
><tr
id=sl_svn157_138

><td class="source">	strHTMLHeader+= &quot;  &lt;head&gt;\r\n&quot;;<br></td></tr
><tr
id=sl_svn157_139

><td class="source">	strHTMLHeader+= &quot;     &lt;meta http-equiv=\&quot;Content-Type\&quot; content=\&quot;text/html; charset=windows-&quot;+m_strCharset+&quot;\&quot;&gt;\r\n&quot;;<br></td></tr
><tr
id=sl_svn157_140

><td class="source">	strHTMLHeader+= &quot;     &lt;title&gt;&quot;+m_strTitle+&quot;&lt;/title&gt;\r\n&quot;;<br></td></tr
><tr
id=sl_svn157_141

><td class="source">	strHTMLHeader+= &quot;  &lt;/head&gt;\r\n&quot;;<br></td></tr
><tr
id=sl_svn157_142

><td class="source">	strHTMLHeader+= &quot;  &lt;body&gt;\r\n&quot;;<br></td></tr
><tr
id=sl_svn157_143

><td class="source">	return strHTMLHeader;<br></td></tr
><tr
id=sl_svn157_144

><td class="source">}<br></td></tr
><tr
id=sl_svn157_145

><td class="source"><br></td></tr
><tr
id=sl_svn157_146

><td class="source">CString CRTF_HTMLConverter::R2H_GetHTMLFooter()<br></td></tr
><tr
id=sl_svn157_147

><td class="source">{<br></td></tr
><tr
id=sl_svn157_148

><td class="source">	CString strHTMLFooter;   <br></td></tr
><tr
id=sl_svn157_149

><td class="source">	strHTMLFooter+= &quot;  &lt;/body&gt;\r\n&quot;;<br></td></tr
><tr
id=sl_svn157_150

><td class="source">	strHTMLFooter+= &quot;&lt;/html&gt;\r\n&quot;;<br></td></tr
><tr
id=sl_svn157_151

><td class="source">	return strHTMLFooter;<br></td></tr
><tr
id=sl_svn157_152

><td class="source">}<br></td></tr
><tr
id=sl_svn157_153

><td class="source"><br></td></tr
><tr
id=sl_svn157_154

><td class="source">CString CRTF_HTMLConverter::R2H_GetRTFTag(const CString&amp; strRTFSource, long lPos)<br></td></tr
><tr
id=sl_svn157_155

><td class="source">{<br></td></tr
><tr
id=sl_svn157_156

><td class="source">	//Initializing<br></td></tr
><tr
id=sl_svn157_157

><td class="source">	CString strTag;<br></td></tr
><tr
id=sl_svn157_158

><td class="source">	ASSERT(lPos&lt;strRTFSource.GetLength()); //lPos is POS(\) within strRTFSource<br></td></tr
><tr
id=sl_svn157_159

><td class="source">	ASSERT(strRTFSource.GetAt(lPos)==&#39;\\&#39;);<br></td></tr
><tr
id=sl_svn157_160

><td class="source">	int nCnt=0;<br></td></tr
><tr
id=sl_svn157_161

><td class="source"><br></td></tr
><tr
id=sl_svn157_162

><td class="source">	const CString TERMINATORS = &quot; {}\\\r&quot;;<br></td></tr
><tr
id=sl_svn157_163

><td class="source">	<br></td></tr
><tr
id=sl_svn157_164

><td class="source">	//Starting from lPos, we say everything is an rtf element until \ or blank or { occurs<br></td></tr
><tr
id=sl_svn157_165

><td class="source">	for (int iStrPos=lPos + 1;iStrPos&lt;strRTFSource.GetLength();iStrPos++) <br></td></tr
><tr
id=sl_svn157_166

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_167

><td class="source">		char ChTest=strRTFSource[iStrPos];<br></td></tr
><tr
id=sl_svn157_168

><td class="source"><br></td></tr
><tr
id=sl_svn157_169

><td class="source">		if (TERMINATORS.Find(ChTest) != -1)<br></td></tr
><tr
id=sl_svn157_170

><td class="source">			break; //designator terminated<br></td></tr
><tr
id=sl_svn157_171

><td class="source"><br></td></tr
><tr
id=sl_svn157_172

><td class="source">		if (strTag.GetLength() &gt;= 3 &amp;&amp; strTag[0]==&#39;\&#39;&#39;) <br></td></tr
><tr
id=sl_svn157_173

><td class="source">			break;<br></td></tr
><tr
id=sl_svn157_174

><td class="source"><br></td></tr
><tr
id=sl_svn157_175

><td class="source">		strTag+=ChTest;<br></td></tr
><tr
id=sl_svn157_176

><td class="source">		nCnt++;<br></td></tr
><tr
id=sl_svn157_177

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_178

><td class="source">	<br></td></tr
><tr
id=sl_svn157_179

><td class="source">	return strTag;  <br></td></tr
><tr
id=sl_svn157_180

><td class="source">}<br></td></tr
><tr
id=sl_svn157_181

><td class="source"><br></td></tr
><tr
id=sl_svn157_182

><td class="source">void CRTF_HTMLConverter::R2H_SetMetaData(CRTFNode&amp; NodeRoot)<br></td></tr
><tr
id=sl_svn157_183

><td class="source">{<br></td></tr
><tr
id=sl_svn157_184

><td class="source">	//Initializing<br></td></tr
><tr
id=sl_svn157_185

><td class="source">	CString strRTFSource = (NodeRoot)-&gt;m_strThisCode;<br></td></tr
><tr
id=sl_svn157_186

><td class="source">	<br></td></tr
><tr
id=sl_svn157_187

><td class="source">	//Go thru RTF main string&#39;s global data<br></td></tr
><tr
id=sl_svn157_188

><td class="source">	for (int iStrPos=0;iStrPos&lt;strRTFSource.GetLength();iStrPos++) <br></td></tr
><tr
id=sl_svn157_189

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_190

><td class="source">		char ChTest=strRTFSource[iStrPos];<br></td></tr
><tr
id=sl_svn157_191

><td class="source"><br></td></tr
><tr
id=sl_svn157_192

><td class="source">		if (ChTest==&#39;\\&#39;) <br></td></tr
><tr
id=sl_svn157_193

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_194

><td class="source">			CString strTag=R2H_GetRTFTag(strRTFSource, iStrPos);<br></td></tr
><tr
id=sl_svn157_195

><td class="source">			CString strTestTag;<br></td></tr
><tr
id=sl_svn157_196

><td class="source">			<br></td></tr
><tr
id=sl_svn157_197

><td class="source">			strTestTag=&quot;ansicpg&quot;;<br></td></tr
><tr
id=sl_svn157_198

><td class="source"><br></td></tr
><tr
id=sl_svn157_199

><td class="source">			if ((strTag.GetLength()&gt;=strTestTag.GetLength())&amp;&amp;(strTag.Left(strTestTag.GetLength())==strTestTag)) <br></td></tr
><tr
id=sl_svn157_200

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_201

><td class="source">				m_strCharset = strTag;<br></td></tr
><tr
id=sl_svn157_202

><td class="source">				m_strCharset.Delete(0, strTestTag.GetLength());<br></td></tr
><tr
id=sl_svn157_203

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_204

><td class="source">			<br></td></tr
><tr
id=sl_svn157_205

><td class="source">			iStrPos+=strTag.GetLength();<br></td></tr
><tr
id=sl_svn157_206

><td class="source"><br></td></tr
><tr
id=sl_svn157_207

><td class="source">			if (((iStrPos+1)&lt;strRTFSource.GetLength())&amp;&amp;(strRTFSource[iStrPos+1]==&#39; &#39;)) <br></td></tr
><tr
id=sl_svn157_208

><td class="source">				iStrPos++; //Ignore Blank after Tag<br></td></tr
><tr
id=sl_svn157_209

><td class="source">		} <br></td></tr
><tr
id=sl_svn157_210

><td class="source">		else <br></td></tr
><tr
id=sl_svn157_211

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_212

><td class="source">			//Normal character<br></td></tr
><tr
id=sl_svn157_213

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_214

><td class="source">	} //loop thru string   <br></td></tr
><tr
id=sl_svn157_215

><td class="source">	<br></td></tr
><tr
id=sl_svn157_216

><td class="source">	//Go thru 1st-level-nodes<br></td></tr
><tr
id=sl_svn157_217

><td class="source">	for(int iRTFNodes=0;iRTFNodes&lt;NodeRoot.Count;iRTFNodes++) <br></td></tr
><tr
id=sl_svn157_218

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_219

><td class="source">		//Color table<br></td></tr
><tr
id=sl_svn157_220

><td class="source">		if (NodeRoot.Nodes[iRTFNodes]-&gt;m_strName==&quot;colortbl&quot;) <br></td></tr
><tr
id=sl_svn157_221

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_222

><td class="source">			CString strColorTbl=NodeRoot.Nodes[iRTFNodes]-&gt;m_strThisCode;<br></td></tr
><tr
id=sl_svn157_223

><td class="source">			strColorTbl.Delete(0,NodeRoot.Nodes[iRTFNodes]-&gt;m_strName.GetLength()+1); //+1=leading \ (backslash)<br></td></tr
><tr
id=sl_svn157_224

><td class="source">			//Palette entries are separated with semicolon ;<br></td></tr
><tr
id=sl_svn157_225

><td class="source">			CStringArray arrStrColors;<br></td></tr
><tr
id=sl_svn157_226

><td class="source">			StringToArray(strColorTbl, arrStrColors);<br></td></tr
><tr
id=sl_svn157_227

><td class="source">			<br></td></tr
><tr
id=sl_svn157_228

><td class="source">			for (int iColor=0;iColor&lt;arrStrColors.GetSize();iColor++) <br></td></tr
><tr
id=sl_svn157_229

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_230

><td class="source">				//RGB values within palette entry are \redXXX\greenXXX\blueXXX<br></td></tr
><tr
id=sl_svn157_231

><td class="source">				DWORD r=0,g=0,b=0;<br></td></tr
><tr
id=sl_svn157_232

><td class="source">				CString strColorEntry=arrStrColors[iColor];<br></td></tr
><tr
id=sl_svn157_233

><td class="source">				strColorEntry.TrimLeft();<br></td></tr
><tr
id=sl_svn157_234

><td class="source">				strColorEntry.TrimRight();<br></td></tr
><tr
id=sl_svn157_235

><td class="source">				if (strColorEntry.GetLength()&gt;0) <br></td></tr
><tr
id=sl_svn157_236

><td class="source">				{<br></td></tr
><tr
id=sl_svn157_237

><td class="source">					//Loop thru base colors (r,g,b) and set them<br></td></tr
><tr
id=sl_svn157_238

><td class="source">					CStringArray arrStrRGBs;<br></td></tr
><tr
id=sl_svn157_239

><td class="source">					R2H_GetRTFTags(strColorEntry, arrStrRGBs);<br></td></tr
><tr
id=sl_svn157_240

><td class="source">					ASSERT(arrStrRGBs.GetSize()==3); //RTF must contain exactly 3 entries for red/green/blue<br></td></tr
><tr
id=sl_svn157_241

><td class="source">					for (int iBaseColor=0;iBaseColor&lt;arrStrRGBs.GetSize();iBaseColor++) <br></td></tr
><tr
id=sl_svn157_242

><td class="source">					{<br></td></tr
><tr
id=sl_svn157_243

><td class="source">						CString strBaseColor=arrStrRGBs[iBaseColor];<br></td></tr
><tr
id=sl_svn157_244

><td class="source">						CString strTestBaseColor;<br></td></tr
><tr
id=sl_svn157_245

><td class="source">						strTestBaseColor=&quot;red&quot;;<br></td></tr
><tr
id=sl_svn157_246

><td class="source">						if ((strBaseColor.GetLength()&gt;=strTestBaseColor.GetLength())&amp;&amp;(strBaseColor.Left(strTestBaseColor.GetLength())==strTestBaseColor)) <br></td></tr
><tr
id=sl_svn157_247

><td class="source">						{ <br></td></tr
><tr
id=sl_svn157_248

><td class="source">							strBaseColor.Delete(0, strTestBaseColor.GetLength());<br></td></tr
><tr
id=sl_svn157_249

><td class="source">							r=StringToLong(strBaseColor);<br></td></tr
><tr
id=sl_svn157_250

><td class="source">						}<br></td></tr
><tr
id=sl_svn157_251

><td class="source">						strTestBaseColor=&quot;green&quot;;<br></td></tr
><tr
id=sl_svn157_252

><td class="source">						if ((strBaseColor.GetLength()&gt;=strTestBaseColor.GetLength())&amp;&amp;(strBaseColor.Left(strTestBaseColor.GetLength())==strTestBaseColor)) <br></td></tr
><tr
id=sl_svn157_253

><td class="source">						{ <br></td></tr
><tr
id=sl_svn157_254

><td class="source">							strBaseColor.Delete(0, strTestBaseColor.GetLength());<br></td></tr
><tr
id=sl_svn157_255

><td class="source">							g=StringToLong(strBaseColor);<br></td></tr
><tr
id=sl_svn157_256

><td class="source">						}<br></td></tr
><tr
id=sl_svn157_257

><td class="source">						strTestBaseColor=&quot;blue&quot;;<br></td></tr
><tr
id=sl_svn157_258

><td class="source">						if ((strBaseColor.GetLength()&gt;=strTestBaseColor.GetLength())&amp;&amp;(strBaseColor.Left(strTestBaseColor.GetLength())==strTestBaseColor)) <br></td></tr
><tr
id=sl_svn157_259

><td class="source">						{ <br></td></tr
><tr
id=sl_svn157_260

><td class="source">							strBaseColor.Delete(0, strTestBaseColor.GetLength());<br></td></tr
><tr
id=sl_svn157_261

><td class="source">							b=StringToLong(strBaseColor);<br></td></tr
><tr
id=sl_svn157_262

><td class="source">						}<br></td></tr
><tr
id=sl_svn157_263

><td class="source">					}<br></td></tr
><tr
id=sl_svn157_264

><td class="source">				}<br></td></tr
><tr
id=sl_svn157_265

><td class="source">				COLORREF ref=RGB(r,g,b); <br></td></tr
><tr
id=sl_svn157_266

><td class="source">				m_arrColors.Add(ref);<br></td></tr
><tr
id=sl_svn157_267

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_268

><td class="source">			continue;<br></td></tr
><tr
id=sl_svn157_269

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_270

><td class="source">		//Font Table<br></td></tr
><tr
id=sl_svn157_271

><td class="source">		if (NodeRoot.Nodes[iRTFNodes]-&gt;m_strName==&quot;fonttbl&quot;) <br></td></tr
><tr
id=sl_svn157_272

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_273

><td class="source">			for(int iFontNodes=0;iFontNodes&lt;NodeRoot.Nodes[iRTFNodes].Count;iFontNodes++) <br></td></tr
><tr
id=sl_svn157_274

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_275

><td class="source">				CString strFontName=NodeRoot.Nodes[iRTFNodes].Nodes[iFontNodes]-&gt;m_strName;<br></td></tr
><tr
id=sl_svn157_276

><td class="source">				CString strFont=NodeRoot.Nodes[iRTFNodes].Nodes[iFontNodes]-&gt;m_strPlain;<br></td></tr
><tr
id=sl_svn157_277

><td class="source">				ASSERT((strFontName.GetLength()&gt;=2)&amp;&amp;(strFontName.Left(1)==&quot;f&quot;)); //No valid RTF<br></td></tr
><tr
id=sl_svn157_278

><td class="source">				ASSERT(strFont.GetLength()&gt;0);<br></td></tr
><tr
id=sl_svn157_279

><td class="source">				strFont.TrimLeft();<br></td></tr
><tr
id=sl_svn157_280

><td class="source">				strFont.TrimRight();<br></td></tr
><tr
id=sl_svn157_281

><td class="source">				strFont.Remove(&#39;;&#39;);<br></td></tr
><tr
id=sl_svn157_282

><td class="source">				m_mapFontNames.SetAt(strFontName, strFont);            <br></td></tr
><tr
id=sl_svn157_283

><td class="source">			} //for-each-font<br></td></tr
><tr
id=sl_svn157_284

><td class="source">			continue;<br></td></tr
><tr
id=sl_svn157_285

><td class="source">		} //if font-table<br></td></tr
><tr
id=sl_svn157_286

><td class="source">	} //for each 1st-level-node<br></td></tr
><tr
id=sl_svn157_287

><td class="source">}<br></td></tr
><tr
id=sl_svn157_288

><td class="source"><br></td></tr
><tr
id=sl_svn157_289

><td class="source">void CRTF_HTMLConverter::R2H_InterpretTag(const CString&amp; strRTFTag)<br></td></tr
><tr
id=sl_svn157_290

><td class="source">{<br></td></tr
><tr
id=sl_svn157_291

><td class="source">	CString strTestTag;   <br></td></tr
><tr
id=sl_svn157_292

><td class="source">	CHTMLElement* pElement = NULL;<br></td></tr
><tr
id=sl_svn157_293

><td class="source">	<br></td></tr
><tr
id=sl_svn157_294

><td class="source">	//Char attributes<br></td></tr
><tr
id=sl_svn157_295

><td class="source">	if (strRTFTag==&quot;b&quot;) <br></td></tr
><tr
id=sl_svn157_296

><td class="source">		pElement = new CHTMLElement(CHTMLElement::c_nodHTMLBegin, &quot;b&quot;);<br></td></tr
><tr
id=sl_svn157_297

><td class="source"><br></td></tr
><tr
id=sl_svn157_298

><td class="source">	else if (strRTFTag==&quot;b0&quot;) <br></td></tr
><tr
id=sl_svn157_299

><td class="source">		pElement = new CHTMLElement(CHTMLElement::c_nodHTMLEnd, &quot;b&quot;);<br></td></tr
><tr
id=sl_svn157_300

><td class="source"><br></td></tr
><tr
id=sl_svn157_301

><td class="source">	else if (strRTFTag==&quot;i&quot;) <br></td></tr
><tr
id=sl_svn157_302

><td class="source">		pElement = new CHTMLElement(CHTMLElement::c_nodHTMLBegin, &quot;i&quot;);<br></td></tr
><tr
id=sl_svn157_303

><td class="source"><br></td></tr
><tr
id=sl_svn157_304

><td class="source">	else if (strRTFTag==&quot;i0&quot;) <br></td></tr
><tr
id=sl_svn157_305

><td class="source">		pElement = new CHTMLElement(CHTMLElement::c_nodHTMLEnd, &quot;i&quot;);<br></td></tr
><tr
id=sl_svn157_306

><td class="source"><br></td></tr
><tr
id=sl_svn157_307

><td class="source">	else if (strRTFTag==&quot;ul&quot;) <br></td></tr
><tr
id=sl_svn157_308

><td class="source">		pElement = new CHTMLElement(CHTMLElement::c_nodHTMLBegin, &quot;u&quot;);<br></td></tr
><tr
id=sl_svn157_309

><td class="source"><br></td></tr
><tr
id=sl_svn157_310

><td class="source">	else if (strRTFTag==&quot;ulnone&quot;) <br></td></tr
><tr
id=sl_svn157_311

><td class="source">		pElement = new CHTMLElement(CHTMLElement::c_nodHTMLEnd, &quot;u&quot;);<br></td></tr
><tr
id=sl_svn157_312

><td class="source"><br></td></tr
><tr
id=sl_svn157_313

><td class="source">	else<br></td></tr
><tr
id=sl_svn157_314

><td class="source">		pElement = new CHTMLElement();<br></td></tr
><tr
id=sl_svn157_315

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_316

><td class="source">//		TRACE (&quot;RTF Tag was &#39;%s&#39;\n&quot;, strRTFTag);<br></td></tr
><tr
id=sl_svn157_317

><td class="source">	} <br></td></tr
><tr
id=sl_svn157_318

><td class="source">	<br></td></tr
><tr
id=sl_svn157_319

><td class="source">	//Special character (umlaut)<br></td></tr
><tr
id=sl_svn157_320

><td class="source">	strTestTag=&quot;&#39;&quot;;<br></td></tr
><tr
id=sl_svn157_321

><td class="source">	if ((pElement-&gt;m_enNodeType==CHTMLElement::c_nodInvalid)&amp;&amp;(strRTFTag.GetLength()&gt;=strTestTag.GetLength())&amp;&amp;(strRTFTag.Left(strTestTag.GetLength())==strTestTag)) <br></td></tr
><tr
id=sl_svn157_322

><td class="source">	{   <br></td></tr
><tr
id=sl_svn157_323

><td class="source">		CString strSpecialChar=strRTFTag;<br></td></tr
><tr
id=sl_svn157_324

><td class="source">		strSpecialChar.Delete(0, strTestTag.GetLength());<br></td></tr
><tr
id=sl_svn157_325

><td class="source">		ASSERT(strSpecialChar.GetLength()==2); //Invalid RTF (must be 2-digit hex code)<br></td></tr
><tr
id=sl_svn157_326

><td class="source">		strSpecialChar=strSpecialChar.Left(2);<br></td></tr
><tr
id=sl_svn157_327

><td class="source">		pElement-&gt;m_enNodeType=CHTMLElement::c_nodText;<br></td></tr
><tr
id=sl_svn157_328

><td class="source">		pElement-&gt;m_strNodeText = &quot;&amp;#x&quot;+strSpecialChar+&quot;;&quot;;<br></td></tr
><tr
id=sl_svn157_329

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_330

><td class="source">	<br></td></tr
><tr
id=sl_svn157_331

><td class="source">	//Paragraph Tag<br></td></tr
><tr
id=sl_svn157_332

><td class="source">	if ((pElement-&gt;m_enNodeType==CHTMLElement::c_nodInvalid)&amp;&amp;(strRTFTag==&quot;par&quot;)) <br></td></tr
><tr
id=sl_svn157_333

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_334

><td class="source">		long lLastUnclosedPStart=-1;<br></td></tr
><tr
id=sl_svn157_335

><td class="source">		//Look if we first must close paragraph<br></td></tr
><tr
id=sl_svn157_336

><td class="source">		for (int iLastElements=m_arrHTMLElements.GetSize()-1;iLastElements&gt;=0;iLastElements--) <br></td></tr
><tr
id=sl_svn157_337

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_338

><td class="source">		/*<br></td></tr
><tr
id=sl_svn157_339

><td class="source">		CHTMLElement* pElementTest = m_arrHTMLElements[iLastElements];<br></td></tr
><tr
id=sl_svn157_340

><td class="source">		if ((pElementTest-&gt;m_enNodeType==CHTMLElement::c_nodHTMLEnd)&amp;&amp;(pElementTest-&gt;m_strNodeText==&quot;p&quot;)) break; //everything is OK<br></td></tr
><tr
id=sl_svn157_341

><td class="source">		if ((pElementTest-&gt;m_enNodeType==CHTMLElement::c_nodHTMLBegin)&amp;&amp;(pElementTest-&gt;m_strNodeText==&quot;p&quot;)) <br></td></tr
><tr
id=sl_svn157_342

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_343

><td class="source">		lLastUnclosedPStart=iLastElements;<br></td></tr
><tr
id=sl_svn157_344

><td class="source">		break; //everything is OK<br></td></tr
><tr
id=sl_svn157_345

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_346

><td class="source">			*/<br></td></tr
><tr
id=sl_svn157_347

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_348

><td class="source">		if (lLastUnclosedPStart&gt;=0) <br></td></tr
><tr
id=sl_svn157_349

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_350

><td class="source">			//Look if there is no text between last &lt;p&gt; and this &lt;p-end&gt; (e.g. &lt;p&gt;&lt;/p&gt;)<br></td></tr
><tr
id=sl_svn157_351

><td class="source">			//HTML does then not display a linefeed, therefore make it to &lt;p&gt;&amp;nbsp;&lt;/p&gt;<br></td></tr
><tr
id=sl_svn157_352

><td class="source">			BOOL bLastParaEmpty=TRUE;<br></td></tr
><tr
id=sl_svn157_353

><td class="source">			for (int iLastPara=lLastUnclosedPStart;iLastPara&lt;m_arrHTMLElements.GetSize();iLastPara++) <br></td></tr
><tr
id=sl_svn157_354

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_355

><td class="source">				CHTMLElement* pElementTest = m_arrHTMLElements[iLastPara];<br></td></tr
><tr
id=sl_svn157_356

><td class="source">				if (pElementTest-&gt;m_enNodeType==CHTMLElement::c_nodText) <br></td></tr
><tr
id=sl_svn157_357

><td class="source">				{<br></td></tr
><tr
id=sl_svn157_358

><td class="source">					if ((pElementTest-&gt;m_strNodeText!=&quot;&quot;)&amp;&amp;<br></td></tr
><tr
id=sl_svn157_359

><td class="source">						(pElementTest-&gt;m_strNodeText!=&quot;\r&quot;)&amp;&amp;<br></td></tr
><tr
id=sl_svn157_360

><td class="source">						(pElementTest-&gt;m_strNodeText!=&quot;\n&quot;)&amp;&amp;<br></td></tr
><tr
id=sl_svn157_361

><td class="source">						(pElementTest-&gt;m_strNodeText!=&quot;\r\n&quot;)&amp;&amp;<br></td></tr
><tr
id=sl_svn157_362

><td class="source">						(pElementTest-&gt;m_strNodeText!=&quot;b&quot;))<br></td></tr
><tr
id=sl_svn157_363

><td class="source">					{<br></td></tr
><tr
id=sl_svn157_364

><td class="source">						bLastParaEmpty = FALSE;<br></td></tr
><tr
id=sl_svn157_365

><td class="source">					}<br></td></tr
><tr
id=sl_svn157_366

><td class="source">				}<br></td></tr
><tr
id=sl_svn157_367

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_368

><td class="source">			<br></td></tr
><tr
id=sl_svn157_369

><td class="source">			/*<br></td></tr
><tr
id=sl_svn157_370

><td class="source">			if (bLastParaEmpty) <br></td></tr
><tr
id=sl_svn157_371

><td class="source">			{ //Insert modified blank (see above)<br></td></tr
><tr
id=sl_svn157_372

><td class="source">            CHTMLElement* pElementBlank = new CHTMLElement();<br></td></tr
><tr
id=sl_svn157_373

><td class="source">            pElementBlank-&gt;m_enNodeType=CHTMLElement::c_nodText;<br></td></tr
><tr
id=sl_svn157_374

><td class="source">            pElementBlank-&gt;m_strNodeText = &quot;&amp;nbsp;&quot;;<br></td></tr
><tr
id=sl_svn157_375

><td class="source">            m_arrHTMLElements.Add(pElementBlank);<br></td></tr
><tr
id=sl_svn157_376

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_377

><td class="source">			*/<br></td></tr
><tr
id=sl_svn157_378

><td class="source">			<br></td></tr
><tr
id=sl_svn157_379

><td class="source">			//Insert Closing &lt;/p&gt;<br></td></tr
><tr
id=sl_svn157_380

><td class="source">			/*         CHTMLElement* pElementClose = new CHTMLElement();<br></td></tr
><tr
id=sl_svn157_381

><td class="source">			pElementClose-&gt;m_enNodeType=CHTMLElement::c_nodHTMLEnd;<br></td></tr
><tr
id=sl_svn157_382

><td class="source">			pElementClose-&gt;m_strNodeText = &quot;p&quot;;<br></td></tr
><tr
id=sl_svn157_383

><td class="source">			m_arrHTMLElements.Add(pElementClose);<br></td></tr
><tr
id=sl_svn157_384

><td class="source">			*/      <br></td></tr
><tr
id=sl_svn157_385

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_386

><td class="source">		//Add paragraph tag (&lt;p&gt;<br></td></tr
><tr
id=sl_svn157_387

><td class="source">		pElement-&gt;m_enNodeType=CHTMLElement::c_nodHTMLBegin;<br></td></tr
><tr
id=sl_svn157_388

><td class="source">		pElement-&gt;m_strNodeText = &quot;br&quot;;<br></td></tr
><tr
id=sl_svn157_389

><td class="source">		//      pElement-&gt;m_strNodeText = &quot;p&quot;;<br></td></tr
><tr
id=sl_svn157_390

><td class="source">	} <br></td></tr
><tr
id=sl_svn157_391

><td class="source">	// else Unknown RTF tag, just ignore<br></td></tr
><tr
id=sl_svn157_392

><td class="source">	<br></td></tr
><tr
id=sl_svn157_393

><td class="source">	//Paragraph Alignment<br></td></tr
><tr
id=sl_svn157_394

><td class="source">	strTestTag=&quot;q&quot;;<br></td></tr
><tr
id=sl_svn157_395

><td class="source">	if ((pElement-&gt;m_enNodeType==CHTMLElement::c_nodInvalid)&amp;&amp;(strRTFTag.GetLength()&gt;=strTestTag.GetLength())&amp;&amp;(strRTFTag.Left(strTestTag.GetLength())==strTestTag)) <br></td></tr
><tr
id=sl_svn157_396

><td class="source">	{   <br></td></tr
><tr
id=sl_svn157_397

><td class="source">		//Get RTF alignment<br></td></tr
><tr
id=sl_svn157_398

><td class="source">		CString strAlignRTF, strAlignHTML;<br></td></tr
><tr
id=sl_svn157_399

><td class="source">		pElement-&gt;m_enNodeType=CHTMLElement::c_nodHTMLBegin;<br></td></tr
><tr
id=sl_svn157_400

><td class="source">		pElement-&gt;m_strNodeText= &quot;font&quot;;<br></td></tr
><tr
id=sl_svn157_401

><td class="source">		strAlignRTF = strRTFTag;      <br></td></tr
><tr
id=sl_svn157_402

><td class="source">		strAlignRTF.Delete(0, strTestTag.GetLength());<br></td></tr
><tr
id=sl_svn157_403

><td class="source">		ASSERT(strAlignRTF.GetLength()==1); //Invalid RTF<br></td></tr
><tr
id=sl_svn157_404

><td class="source">		<br></td></tr
><tr
id=sl_svn157_405

><td class="source">		//Convert RTF options to HTML options<br></td></tr
><tr
id=sl_svn157_406

><td class="source">		if (strAlignRTF==&quot;l&quot;) <br></td></tr
><tr
id=sl_svn157_407

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_408

><td class="source">			strAlignHTML=&quot;left&quot;;<br></td></tr
><tr
id=sl_svn157_409

><td class="source">		} <br></td></tr
><tr
id=sl_svn157_410

><td class="source">		else if (strAlignRTF==&quot;r&quot;) <br></td></tr
><tr
id=sl_svn157_411

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_412

><td class="source">			strAlignHTML=&quot;right&quot;;<br></td></tr
><tr
id=sl_svn157_413

><td class="source">		} <br></td></tr
><tr
id=sl_svn157_414

><td class="source">		else if (strAlignRTF==&quot;c&quot;) <br></td></tr
><tr
id=sl_svn157_415

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_416

><td class="source">			strAlignHTML=&quot;center&quot;;<br></td></tr
><tr
id=sl_svn157_417

><td class="source">		} <br></td></tr
><tr
id=sl_svn157_418

><td class="source">		else <br></td></tr
><tr
id=sl_svn157_419

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_420

><td class="source">			; //unsupported<br></td></tr
><tr
id=sl_svn157_421

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_422

><td class="source">		//Find last paragraph<br></td></tr
><tr
id=sl_svn157_423

><td class="source">		long lLastParaStart=-1;<br></td></tr
><tr
id=sl_svn157_424

><td class="source">		for (int iLastElements=m_arrHTMLElements.GetSize()-1;iLastElements&gt;=0;iLastElements--) <br></td></tr
><tr
id=sl_svn157_425

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_426

><td class="source">			CHTMLElement* pElementTest = m_arrHTMLElements[iLastElements];<br></td></tr
><tr
id=sl_svn157_427

><td class="source">			if ((pElementTest-&gt;m_enNodeType==CHTMLElement::c_nodHTMLBegin)&amp;&amp;(pElementTest-&gt;m_strNodeText==&quot;p&quot;)) <br></td></tr
><tr
id=sl_svn157_428

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_429

><td class="source">				lLastParaStart=iLastElements;<br></td></tr
><tr
id=sl_svn157_430

><td class="source">				break; //everything is OK<br></td></tr
><tr
id=sl_svn157_431

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_432

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_433

><td class="source">		if ((lLastParaStart&gt;=0)&amp;&amp;(strAlignHTML!=&quot;&quot;)) <br></td></tr
><tr
id=sl_svn157_434

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_435

><td class="source">			CHTMLElement* pElementPara = m_arrHTMLElements[lLastParaStart];<br></td></tr
><tr
id=sl_svn157_436

><td class="source">			pElementPara-&gt;m_mapParams.SetAt(&quot;align&quot;, &quot;\&quot;&quot;+strAlignHTML+&quot;\&quot;&quot;);<br></td></tr
><tr
id=sl_svn157_437

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_438

><td class="source">		<br></td></tr
><tr
id=sl_svn157_439

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_440

><td class="source">	<br></td></tr
><tr
id=sl_svn157_441

><td class="source">	//font color<br></td></tr
><tr
id=sl_svn157_442

><td class="source">	strTestTag=&quot;cf&quot;;<br></td></tr
><tr
id=sl_svn157_443

><td class="source">	if ((pElement-&gt;m_enNodeType==CHTMLElement::c_nodInvalid)&amp;&amp;(strRTFTag.GetLength()&gt;=strTestTag.GetLength())&amp;&amp;(strRTFTag.Left(strTestTag.GetLength())==strTestTag)) <br></td></tr
><tr
id=sl_svn157_444

><td class="source">	{   <br></td></tr
><tr
id=sl_svn157_445

><td class="source">		CString strActColor;<br></td></tr
><tr
id=sl_svn157_446

><td class="source">		pElement-&gt;m_enNodeType=CHTMLElement::c_nodHTMLBegin;<br></td></tr
><tr
id=sl_svn157_447

><td class="source">		pElement-&gt;m_strNodeText= &quot;font&quot;;<br></td></tr
><tr
id=sl_svn157_448

><td class="source">		strActColor = strRTFTag;<br></td></tr
><tr
id=sl_svn157_449

><td class="source">		strActColor.Delete(0, strTestTag.GetLength());<br></td></tr
><tr
id=sl_svn157_450

><td class="source">		ASSERT(strActColor.GetLength()&gt;0); //Invalid RTF<br></td></tr
><tr
id=sl_svn157_451

><td class="source">		long lActColor=StringToLong(strActColor);<br></td></tr
><tr
id=sl_svn157_452

><td class="source">		ASSERT(lActColor&lt;m_arrColors.GetSize()); //Color not in Colortable !<br></td></tr
><tr
id=sl_svn157_453

><td class="source">		if (lActColor&lt;m_arrColors.GetSize()) {<br></td></tr
><tr
id=sl_svn157_454

><td class="source">			DWORD r=0,g=0,b=0;<br></td></tr
><tr
id=sl_svn157_455

><td class="source">			COLORREF ref=m_arrColors[lActColor];<br></td></tr
><tr
id=sl_svn157_456

><td class="source">			r=GetRValue(ref);<br></td></tr
><tr
id=sl_svn157_457

><td class="source">			g=GetGValue(ref);<br></td></tr
><tr
id=sl_svn157_458

><td class="source">			b=GetBValue(ref);<br></td></tr
><tr
id=sl_svn157_459

><td class="source">			CString strHTMLColor;<br></td></tr
><tr
id=sl_svn157_460

><td class="source">			strHTMLColor.Format(&quot;#%02x%02x%02x&quot;,r,g,b);<br></td></tr
><tr
id=sl_svn157_461

><td class="source">			m_strActFontColor = strHTMLColor;<br></td></tr
><tr
id=sl_svn157_462

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_463

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_464

><td class="source">	//font size<br></td></tr
><tr
id=sl_svn157_465

><td class="source">	strTestTag=&quot;fs&quot;;<br></td></tr
><tr
id=sl_svn157_466

><td class="source">	if ((pElement-&gt;m_enNodeType==CHTMLElement::c_nodInvalid)&amp;&amp;(strRTFTag.GetLength()&gt;=strTestTag.GetLength())&amp;&amp;(strRTFTag.Left(strTestTag.GetLength())==strTestTag)) <br></td></tr
><tr
id=sl_svn157_467

><td class="source">	{   <br></td></tr
><tr
id=sl_svn157_468

><td class="source">		pElement-&gt;m_enNodeType=CHTMLElement::c_nodHTMLBegin;<br></td></tr
><tr
id=sl_svn157_469

><td class="source">		pElement-&gt;m_strNodeText= &quot;font&quot;;<br></td></tr
><tr
id=sl_svn157_470

><td class="source">		m_strActFontSize = strRTFTag;<br></td></tr
><tr
id=sl_svn157_471

><td class="source">		m_strActFontSize.Delete(0, strTestTag.GetLength());<br></td></tr
><tr
id=sl_svn157_472

><td class="source">		ASSERT(m_strActFontSize.GetLength()&gt;0); //Invalid RTF<br></td></tr
><tr
id=sl_svn157_473

><td class="source">		m_strActFontSize=LongToString(StringToLong(m_strActFontSize)/2); //RTF stores the doubled font size<br></td></tr
><tr
id=sl_svn157_474

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_475

><td class="source">	//font name<br></td></tr
><tr
id=sl_svn157_476

><td class="source">	strTestTag=&quot;f&quot;;  //f+number<br></td></tr
><tr
id=sl_svn157_477

><td class="source">	if ((pElement-&gt;m_enNodeType==CHTMLElement::c_nodInvalid)&amp;&amp;(strRTFTag.GetLength()&gt;=strTestTag.GetLength())&amp;&amp;(strRTFTag.Left(strTestTag.GetLength())==strTestTag)&amp;&amp;(strRTFTag.Mid(1).SpanIncluding(&quot;01234567890&quot;)==strRTFTag.Mid(1))) <br></td></tr
><tr
id=sl_svn157_478

><td class="source">	{   <br></td></tr
><tr
id=sl_svn157_479

><td class="source">		CString strActFontDsgn = strRTFTag;<br></td></tr
><tr
id=sl_svn157_480

><td class="source">		pElement-&gt;m_enNodeType=CHTMLElement::c_nodHTMLBegin;<br></td></tr
><tr
id=sl_svn157_481

><td class="source">		pElement-&gt;m_strNodeText= &quot;font&quot;;<br></td></tr
><tr
id=sl_svn157_482

><td class="source">		ASSERT(strActFontDsgn.GetLength()&gt;0); //Invalid RTF<br></td></tr
><tr
id=sl_svn157_483

><td class="source">		CString strActFontName;<br></td></tr
><tr
id=sl_svn157_484

><td class="source">		BOOL bFound=m_mapFontNames.Lookup(strActFontDsgn,strActFontName);<br></td></tr
><tr
id=sl_svn157_485

><td class="source">		ASSERT(bFound); //Font not found in font table, don&#39;t change font<br></td></tr
><tr
id=sl_svn157_486

><td class="source">		if (bFound) m_strActFontName=strActFontName;<br></td></tr
><tr
id=sl_svn157_487

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_488

><td class="source">	<br></td></tr
><tr
id=sl_svn157_489

><td class="source">	//New font tag ?<br></td></tr
><tr
id=sl_svn157_490

><td class="source">	if ((pElement-&gt;m_enNodeType==CHTMLElement::c_nodHTMLBegin)&amp;&amp;(pElement-&gt;m_strNodeText==&quot;font&quot;)) <br></td></tr
><tr
id=sl_svn157_491

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_492

><td class="source">		BOOL bMustClose=FALSE;<br></td></tr
><tr
id=sl_svn157_493

><td class="source">		//Look if we first must close paragraph<br></td></tr
><tr
id=sl_svn157_494

><td class="source">		for (int iLastElements=m_arrHTMLElements.GetSize()-1;iLastElements&gt;=0;iLastElements--) <br></td></tr
><tr
id=sl_svn157_495

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_496

><td class="source">			CHTMLElement* pElementTest = m_arrHTMLElements[iLastElements];<br></td></tr
><tr
id=sl_svn157_497

><td class="source">			if ((pElementTest-&gt;m_enNodeType==CHTMLElement::c_nodHTMLEnd)&amp;&amp;(pElementTest-&gt;m_strNodeText==&quot;font&quot;)) break; //everything is OK<br></td></tr
><tr
id=sl_svn157_498

><td class="source">			if ((pElementTest-&gt;m_enNodeType==CHTMLElement::c_nodHTMLBegin)&amp;&amp;(pElementTest-&gt;m_strNodeText==&quot;font&quot;)) <br></td></tr
><tr
id=sl_svn157_499

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_500

><td class="source">				bMustClose=TRUE;<br></td></tr
><tr
id=sl_svn157_501

><td class="source">				break; //everything is OK<br></td></tr
><tr
id=sl_svn157_502

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_503

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_504

><td class="source">		if (bMustClose) <br></td></tr
><tr
id=sl_svn157_505

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_506

><td class="source">			//Insert Closing &lt;/p&gt;<br></td></tr
><tr
id=sl_svn157_507

><td class="source">			CHTMLElement* pElementClose = new CHTMLElement();<br></td></tr
><tr
id=sl_svn157_508

><td class="source">			pElementClose-&gt;m_enNodeType=CHTMLElement::c_nodHTMLEnd;<br></td></tr
><tr
id=sl_svn157_509

><td class="source">			pElementClose-&gt;m_strNodeText = &quot;font&quot;;<br></td></tr
><tr
id=sl_svn157_510

><td class="source">			m_arrHTMLElements.Add(pElementClose);<br></td></tr
><tr
id=sl_svn157_511

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_512

><td class="source">		//Set font tag options<br></td></tr
><tr
id=sl_svn157_513

><td class="source">		pElement-&gt;m_mapParams.SetAt(&quot;color&quot;, &quot;\&quot;&quot;+m_strActFontColor+&quot;\&quot;&quot;);<br></td></tr
><tr
id=sl_svn157_514

><td class="source">		pElement-&gt;m_mapParams.SetAt(&quot;style&quot;, &quot;\&quot;font-size: &quot;+m_strActFontSize+&quot;pt; font-family:&quot;+m_strActFontName+&quot;;\&quot;&quot;);<br></td></tr
><tr
id=sl_svn157_515

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_516

><td class="source">	if (pElement-&gt;m_enNodeType!=CHTMLElement::c_nodInvalid) <br></td></tr
><tr
id=sl_svn157_517

><td class="source">		m_arrHTMLElements.Add(pElement);<br></td></tr
><tr
id=sl_svn157_518

><td class="source">	else<br></td></tr
><tr
id=sl_svn157_519

><td class="source">		delete pElement;<br></td></tr
><tr
id=sl_svn157_520

><td class="source">}<br></td></tr
><tr
id=sl_svn157_521

><td class="source"><br></td></tr
><tr
id=sl_svn157_522

><td class="source">void CRTF_HTMLConverter::R2H_GetRTFTags(const CString&amp; strRTFSource, CStringArray&amp; arrTgt)<br></td></tr
><tr
id=sl_svn157_523

><td class="source">{<br></td></tr
><tr
id=sl_svn157_524

><td class="source">	//Go thru RTF main string<br></td></tr
><tr
id=sl_svn157_525

><td class="source">	for (int iStrPos=0;iStrPos&lt;strRTFSource.GetLength();iStrPos++) <br></td></tr
><tr
id=sl_svn157_526

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_527

><td class="source">		CString strChTest=strRTFSource[iStrPos];<br></td></tr
><tr
id=sl_svn157_528

><td class="source">		if (strChTest==&quot;\\&quot;) <br></td></tr
><tr
id=sl_svn157_529

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_530

><td class="source">			CString strTag=R2H_GetRTFTag(strRTFSource, iStrPos);<br></td></tr
><tr
id=sl_svn157_531

><td class="source">			arrTgt.Add(strTag);<br></td></tr
><tr
id=sl_svn157_532

><td class="source">			iStrPos+=strTag.GetLength();<br></td></tr
><tr
id=sl_svn157_533

><td class="source">			if (((iStrPos+1)&lt;strRTFSource.GetLength())&amp;&amp;(strRTFSource[iStrPos+1]==&#39; &#39;)) iStrPos++; //Ignore Blank after Tag<br></td></tr
><tr
id=sl_svn157_534

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_535

><td class="source">	} //loop thru string<br></td></tr
><tr
id=sl_svn157_536

><td class="source">}<br></td></tr
><tr
id=sl_svn157_537

><td class="source"><br></td></tr
><tr
id=sl_svn157_538

><td class="source"><br></td></tr
><tr
id=sl_svn157_539

><td class="source">//! Gets the created HTML elements as HTML text<br></td></tr
><tr
id=sl_svn157_540

><td class="source">void CRTF_HTMLConverter::R2H_GetHTMLElements(CString&amp; strHTML)<br></td></tr
><tr
id=sl_svn157_541

><td class="source">{<br></td></tr
><tr
id=sl_svn157_542

><td class="source">	strHTML=&quot;&quot;;<br></td></tr
><tr
id=sl_svn157_543

><td class="source"><br></td></tr
><tr
id=sl_svn157_544

><td class="source">	// remove invalid trailing elements<br></td></tr
><tr
id=sl_svn157_545

><td class="source">	int iElemCount = m_arrHTMLElements.GetSize();<br></td></tr
><tr
id=sl_svn157_546

><td class="source"><br></td></tr
><tr
id=sl_svn157_547

><td class="source">	while (iElemCount--)<br></td></tr
><tr
id=sl_svn157_548

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_549

><td class="source">		CHTMLElement* pElem = m_arrHTMLElements[iElemCount];<br></td></tr
><tr
id=sl_svn157_550

><td class="source"><br></td></tr
><tr
id=sl_svn157_551

><td class="source">		if (pElem-&gt;m_enNodeType==CHTMLElement::c_nodHTMLEnd) <br></td></tr
><tr
id=sl_svn157_552

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_553

><td class="source">			iElemCount++; // we want this element<br></td></tr
><tr
id=sl_svn157_554

><td class="source">			break;<br></td></tr
><tr
id=sl_svn157_555

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_556

><td class="source">		else if (pElem-&gt;m_enNodeType==CHTMLElement::c_nodText) <br></td></tr
><tr
id=sl_svn157_557

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_558

><td class="source">			CString sText = pElem-&gt;m_strNodeText;<br></td></tr
><tr
id=sl_svn157_559

><td class="source">			sText.TrimLeft();<br></td></tr
><tr
id=sl_svn157_560

><td class="source">			sText.TrimRight();<br></td></tr
><tr
id=sl_svn157_561

><td class="source"><br></td></tr
><tr
id=sl_svn157_562

><td class="source">			if (!sText.IsEmpty() &amp;&amp; sText != &quot;br&quot; &amp;&amp; sText != &quot;\n&quot; &amp;&amp; sText != &quot;\r\n&quot;)<br></td></tr
><tr
id=sl_svn157_563

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_564

><td class="source">				iElemCount++; // we want this element<br></td></tr
><tr
id=sl_svn157_565

><td class="source">				break;<br></td></tr
><tr
id=sl_svn157_566

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_567

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_568

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_569

><td class="source"><br></td></tr
><tr
id=sl_svn157_570

><td class="source">	// Loop thru what&#39;s remaining of the HTML elements<br></td></tr
><tr
id=sl_svn157_571

><td class="source">	CMap&lt;CString, LPCTSTR, int, int&gt; mapOpenTags;<br></td></tr
><tr
id=sl_svn157_572

><td class="source"><br></td></tr
><tr
id=sl_svn157_573

><td class="source">	for (int iElem=0;iElem&lt;iElemCount;iElem++) <br></td></tr
><tr
id=sl_svn157_574

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_575

><td class="source">		CHTMLElement* pElem = m_arrHTMLElements[iElem];<br></td></tr
><tr
id=sl_svn157_576

><td class="source">		CString sElem;<br></td></tr
><tr
id=sl_svn157_577

><td class="source"><br></td></tr
><tr
id=sl_svn157_578

><td class="source">		if (pElem-&gt;m_enNodeType==CHTMLElement::c_nodHTMLBegin) <br></td></tr
><tr
id=sl_svn157_579

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_580

><td class="source">			// look ahead so that we can strip out empty tag pairs (typically &#39;font&#39;)<br></td></tr
><tr
id=sl_svn157_581

><td class="source">			bool bEmpty = false;<br></td></tr
><tr
id=sl_svn157_582

><td class="source"><br></td></tr
><tr
id=sl_svn157_583

><td class="source">			if (iElem + 1 &lt; m_arrHTMLElements.GetSize()) <br></td></tr
><tr
id=sl_svn157_584

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_585

><td class="source">				CHTMLElement* pElemNext = m_arrHTMLElements[iElem + 1];<br></td></tr
><tr
id=sl_svn157_586

><td class="source"><br></td></tr
><tr
id=sl_svn157_587

><td class="source">				if (pElemNext-&gt;m_enNodeType==CHTMLElement::c_nodHTMLEnd &amp;&amp;<br></td></tr
><tr
id=sl_svn157_588

><td class="source">					pElemNext-&gt;m_strNodeText == pElem-&gt;m_strNodeText)<br></td></tr
><tr
id=sl_svn157_589

><td class="source">				{<br></td></tr
><tr
id=sl_svn157_590

><td class="source">					TRACE (&quot;CRTF_HTMLConverter::R2H_GetHTMLElements(removing &#39;%s&#39;)\n&quot;, pElemNext-&gt;m_strNodeText);<br></td></tr
><tr
id=sl_svn157_591

><td class="source">					bEmpty = true;<br></td></tr
><tr
id=sl_svn157_592

><td class="source">				}<br></td></tr
><tr
id=sl_svn157_593

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_594

><td class="source"><br></td></tr
><tr
id=sl_svn157_595

><td class="source">			if (bEmpty)<br></td></tr
><tr
id=sl_svn157_596

><td class="source">				iElem++; // remove end tag too<br></td></tr
><tr
id=sl_svn157_597

><td class="source">			else<br></td></tr
><tr
id=sl_svn157_598

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_599

><td class="source">				// keep track of opentags<br></td></tr
><tr
id=sl_svn157_600

><td class="source">				int nCount = 0;<br></td></tr
><tr
id=sl_svn157_601

><td class="source"><br></td></tr
><tr
id=sl_svn157_602

><td class="source">				mapOpenTags.Lookup(pElem-&gt;m_strNodeText, nCount);<br></td></tr
><tr
id=sl_svn157_603

><td class="source">				mapOpenTags[pElem-&gt;m_strNodeText] = ++nCount;<br></td></tr
><tr
id=sl_svn157_604

><td class="source"><br></td></tr
><tr
id=sl_svn157_605

><td class="source">				// HTML element open tag<br></td></tr
><tr
id=sl_svn157_606

><td class="source">				sElem = &quot;&lt;&quot;;<br></td></tr
><tr
id=sl_svn157_607

><td class="source">				sElem += pElem-&gt;m_strNodeText;<br></td></tr
><tr
id=sl_svn157_608

><td class="source"><br></td></tr
><tr
id=sl_svn157_609

><td class="source">				// HTML element parameters (&lt;font param1=&quot;test&quot; param2=&quot;hugo&quot;&gt;<br></td></tr
><tr
id=sl_svn157_610

><td class="source">				POSITION pos = pElem-&gt;m_mapParams.GetStartPosition();<br></td></tr
><tr
id=sl_svn157_611

><td class="source"><br></td></tr
><tr
id=sl_svn157_612

><td class="source">				while (pos) <br></td></tr
><tr
id=sl_svn157_613

><td class="source">				{<br></td></tr
><tr
id=sl_svn157_614

><td class="source">					CString strKey, strValue;<br></td></tr
><tr
id=sl_svn157_615

><td class="source">					pElem-&gt;m_mapParams.GetNextAssoc(pos, strKey, strValue);<br></td></tr
><tr
id=sl_svn157_616

><td class="source"><br></td></tr
><tr
id=sl_svn157_617

><td class="source">					sElem+= &quot; &quot;+strKey+&quot; = &quot;+strValue;<br></td></tr
><tr
id=sl_svn157_618

><td class="source">				}<br></td></tr
><tr
id=sl_svn157_619

><td class="source">				sElem+= &quot;&gt;&quot;;<br></td></tr
><tr
id=sl_svn157_620

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_621

><td class="source">		} <br></td></tr
><tr
id=sl_svn157_622

><td class="source">		else if (pElem-&gt;m_enNodeType==CHTMLElement::c_nodHTMLEnd)<br></td></tr
><tr
id=sl_svn157_623

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_624

><td class="source">			sElem.Format(&quot;&lt;/%s&gt;&quot;, pElem-&gt;m_strNodeText);<br></td></tr
><tr
id=sl_svn157_625

><td class="source"><br></td></tr
><tr
id=sl_svn157_626

><td class="source">			// decrement open tag count<br></td></tr
><tr
id=sl_svn157_627

><td class="source">			int nCount = 0;<br></td></tr
><tr
id=sl_svn157_628

><td class="source"><br></td></tr
><tr
id=sl_svn157_629

><td class="source">			mapOpenTags.Lookup(pElem-&gt;m_strNodeText, nCount);<br></td></tr
><tr
id=sl_svn157_630

><td class="source"><br></td></tr
><tr
id=sl_svn157_631

><td class="source">			if (nCount &gt; 0)<br></td></tr
><tr
id=sl_svn157_632

><td class="source">				mapOpenTags[pElem-&gt;m_strNodeText] = --nCount;<br></td></tr
><tr
id=sl_svn157_633

><td class="source">		} <br></td></tr
><tr
id=sl_svn157_634

><td class="source">		else if (pElem-&gt;m_enNodeType==CHTMLElement::c_nodText) <br></td></tr
><tr
id=sl_svn157_635

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_636

><td class="source">			sElem = pElem-&gt;m_strNodeText;        <br></td></tr
><tr
id=sl_svn157_637

><td class="source">		} <br></td></tr
><tr
id=sl_svn157_638

><td class="source">		else <br></td></tr
><tr
id=sl_svn157_639

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_640

><td class="source">			ASSERT(FALSE); //internal error (wrong html tag)<br></td></tr
><tr
id=sl_svn157_641

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_642

><td class="source"><br></td></tr
><tr
id=sl_svn157_643

><td class="source">		if (!sElem.IsEmpty())<br></td></tr
><tr
id=sl_svn157_644

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_645

><td class="source">//			TRACE (&quot;CRTF_HTMLConverter::R2H_GetHTMLElements(adding &#39;%s&#39;)\n&quot;, sElem);<br></td></tr
><tr
id=sl_svn157_646

><td class="source">			strHTML += sElem;<br></td></tr
><tr
id=sl_svn157_647

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_648

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_649

><td class="source"><br></td></tr
><tr
id=sl_svn157_650

><td class="source">	// any open tags remaining?<br></td></tr
><tr
id=sl_svn157_651

><td class="source">	POSITION pos = mapOpenTags.GetStartPosition();<br></td></tr
><tr
id=sl_svn157_652

><td class="source"><br></td></tr
><tr
id=sl_svn157_653

><td class="source">	while (pos)<br></td></tr
><tr
id=sl_svn157_654

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_655

><td class="source">		CString sTag, sClose;<br></td></tr
><tr
id=sl_svn157_656

><td class="source">		int nCount = 0;<br></td></tr
><tr
id=sl_svn157_657

><td class="source">		mapOpenTags.GetNextAssoc(pos, sTag, nCount);<br></td></tr
><tr
id=sl_svn157_658

><td class="source"><br></td></tr
><tr
id=sl_svn157_659

><td class="source">		if (nCount &amp;&amp; sTag != &quot;br&quot;)<br></td></tr
><tr
id=sl_svn157_660

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_661

><td class="source">			sClose.Format(&quot;&lt;/%s&gt;&quot;, sTag);<br></td></tr
><tr
id=sl_svn157_662

><td class="source"><br></td></tr
><tr
id=sl_svn157_663

><td class="source">			while (nCount--)<br></td></tr
><tr
id=sl_svn157_664

><td class="source">				strHTML += sClose;<br></td></tr
><tr
id=sl_svn157_665

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_666

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_667

><td class="source"><br></td></tr
><tr
id=sl_svn157_668

><td class="source">	if (strHTML.GetLength() &lt; 210)<br></td></tr
><tr
id=sl_svn157_669

><td class="source">		TRACE (&quot;CRTF_HTMLConverter::R2H_GetHTMLElements(%s)\n&quot;, strHTML);<br></td></tr
><tr
id=sl_svn157_670

><td class="source">}<br></td></tr
><tr
id=sl_svn157_671

><td class="source"><br></td></tr
><tr
id=sl_svn157_672

><td class="source">int CRTF_HTMLConverter::GetCodePage(const CString&amp; sRtf)<br></td></tr
><tr
id=sl_svn157_673

><td class="source">{<br></td></tr
><tr
id=sl_svn157_674

><td class="source">	const CString CPGTAG(&quot;\\ansicpg&quot;);<br></td></tr
><tr
id=sl_svn157_675

><td class="source"><br></td></tr
><tr
id=sl_svn157_676

><td class="source">	int nFind = sRtf.Find(CPGTAG);<br></td></tr
><tr
id=sl_svn157_677

><td class="source"><br></td></tr
><tr
id=sl_svn157_678

><td class="source">	if (nFind != -1)<br></td></tr
><tr
id=sl_svn157_679

><td class="source">		return atoi((LPCTSTR)sRtf + (nFind + CPGTAG.GetLength()));<br></td></tr
><tr
id=sl_svn157_680

><td class="source"><br></td></tr
><tr
id=sl_svn157_681

><td class="source">	return -1;<br></td></tr
><tr
id=sl_svn157_682

><td class="source">}<br></td></tr
><tr
id=sl_svn157_683

><td class="source"><br></td></tr
><tr
id=sl_svn157_684

><td class="source">BOOL CRTF_HTMLConverter::HasMultiByteChars(const CString&amp; sRtf)<br></td></tr
><tr
id=sl_svn157_685

><td class="source">{<br></td></tr
><tr
id=sl_svn157_686

><td class="source">//	return FALSE;<br></td></tr
><tr
id=sl_svn157_687

><td class="source">	const CString MULTIBYTETAG(&quot;\\&#39;&quot;);<br></td></tr
><tr
id=sl_svn157_688

><td class="source"><br></td></tr
><tr
id=sl_svn157_689

><td class="source">	return (sRtf.Find(MULTIBYTETAG) &gt;= 0);<br></td></tr
><tr
id=sl_svn157_690

><td class="source">}<br></td></tr
><tr
id=sl_svn157_691

><td class="source"><br></td></tr
><tr
id=sl_svn157_692

><td class="source">void CRTF_HTMLConverter::R2H_CreateHTMLElements(const CString&amp; strRTFSource)<br></td></tr
><tr
id=sl_svn157_693

><td class="source">{<br></td></tr
><tr
id=sl_svn157_694

><td class="source">	//Go thru RTF main string<br></td></tr
><tr
id=sl_svn157_695

><td class="source">	CString strCurrentText;<br></td></tr
><tr
id=sl_svn157_696

><td class="source">	for (int iStrPos=0;iStrPos&lt;strRTFSource.GetLength();iStrPos++) <br></td></tr
><tr
id=sl_svn157_697

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_698

><td class="source">		CString strChTest=strRTFSource[iStrPos];<br></td></tr
><tr
id=sl_svn157_699

><td class="source">#ifdef _DEBUG<br></td></tr
><tr
id=sl_svn157_700

><td class="source">		const char* szPos = (LPCTSTR)strRTFSource + iStrPos;<br></td></tr
><tr
id=sl_svn157_701

><td class="source">#endif<br></td></tr
><tr
id=sl_svn157_702

><td class="source"><br></td></tr
><tr
id=sl_svn157_703

><td class="source">		if (strChTest==&quot;\\&quot;) <br></td></tr
><tr
id=sl_svn157_704

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_705

><td class="source">			// check for multi-byte char<br></td></tr
><tr
id=sl_svn157_706

><td class="source">/*<br></td></tr
><tr
id=sl_svn157_707

><td class="source">			if (strRTFSource.Find(MULTIBYTETAG, iStrPos) == iStrPos)<br></td></tr
><tr
id=sl_svn157_708

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_709

><td class="source">				// extract next two elements as a single wide char<br></td></tr
><tr
id=sl_svn157_710

><td class="source">				CString sLow = strRTFSource.Mid(iStrPos + 2, 2);<br></td></tr
><tr
id=sl_svn157_711

><td class="source">				CString sHigh = strRTFSource.Mid(iStrPos + 6, 2);<br></td></tr
><tr
id=sl_svn157_712

><td class="source"><br></td></tr
><tr
id=sl_svn157_713

><td class="source">				wchar_t wChar = (WORD)strtol(sHigh + sLow, NULL, 16);<br></td></tr
><tr
id=sl_svn157_714

><td class="source">				CString sChar = Misc::WideToMultiByte(wChar);<br></td></tr
><tr
id=sl_svn157_715

><td class="source"><br></td></tr
><tr
id=sl_svn157_716

><td class="source">				strCurrentText += sChar;<br></td></tr
><tr
id=sl_svn157_717

><td class="source"><br></td></tr
><tr
id=sl_svn157_718

><td class="source">				iStrPos += 7;<br></td></tr
><tr
id=sl_svn157_719

><td class="source">				continue;<br></td></tr
><tr
id=sl_svn157_720

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_721

><td class="source">*/<br></td></tr
><tr
id=sl_svn157_722

><td class="source"><br></td></tr
><tr
id=sl_svn157_723

><td class="source">			//New tag<br></td></tr
><tr
id=sl_svn157_724

><td class="source">			if (strCurrentText!=&quot;&quot;) <br></td></tr
><tr
id=sl_svn157_725

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_726

><td class="source">				CHTMLElement* pElement = new CHTMLElement();<br></td></tr
><tr
id=sl_svn157_727

><td class="source">				pElement-&gt;m_enNodeType=CHTMLElement::c_nodText;<br></td></tr
><tr
id=sl_svn157_728

><td class="source">				pElement-&gt;m_strNodeText = strCurrentText;<br></td></tr
><tr
id=sl_svn157_729

><td class="source">				m_arrHTMLElements.Add(pElement);<br></td></tr
><tr
id=sl_svn157_730

><td class="source">				strCurrentText=&quot;&quot;;<br></td></tr
><tr
id=sl_svn157_731

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_732

><td class="source">			CString strTag=R2H_GetRTFTag(strRTFSource, iStrPos);<br></td></tr
><tr
id=sl_svn157_733

><td class="source">			R2H_InterpretTag(strTag);         <br></td></tr
><tr
id=sl_svn157_734

><td class="source">			iStrPos+=strTag.GetLength();<br></td></tr
><tr
id=sl_svn157_735

><td class="source">			if (((iStrPos+1)&lt;strRTFSource.GetLength())&amp;&amp;(strRTFSource[iStrPos+1]==&#39; &#39;)) <br></td></tr
><tr
id=sl_svn157_736

><td class="source">				iStrPos++; //Ignore Blank after Tag<br></td></tr
><tr
id=sl_svn157_737

><td class="source">		} <br></td></tr
><tr
id=sl_svn157_738

><td class="source">		else if (strChTest==&quot;\n&quot; || strChTest==&quot;\r&quot;)<br></td></tr
><tr
id=sl_svn157_739

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_740

><td class="source">			// line endings<br></td></tr
><tr
id=sl_svn157_741

><td class="source">			strCurrentText+=strChTest;<br></td></tr
><tr
id=sl_svn157_742

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_743

><td class="source">		else<br></td></tr
><tr
id=sl_svn157_744

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_745

><td class="source">			//Normal character<br></td></tr
><tr
id=sl_svn157_746

><td class="source">			strCurrentText+=CHtmlCharMap::ConvertToRep(strChTest);<br></td></tr
><tr
id=sl_svn157_747

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_748

><td class="source">	} //loop thru string<br></td></tr
><tr
id=sl_svn157_749

><td class="source">	<br></td></tr
><tr
id=sl_svn157_750

><td class="source">	//Add last text<br></td></tr
><tr
id=sl_svn157_751

><td class="source">	if (strCurrentText!=&quot;&quot;) <br></td></tr
><tr
id=sl_svn157_752

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_753

><td class="source">		CHTMLElement* pElement = new CHTMLElement();<br></td></tr
><tr
id=sl_svn157_754

><td class="source">		pElement-&gt;m_enNodeType=CHTMLElement::c_nodText;<br></td></tr
><tr
id=sl_svn157_755

><td class="source">		pElement-&gt;m_strNodeText = strCurrentText;<br></td></tr
><tr
id=sl_svn157_756

><td class="source">		m_arrHTMLElements.Add(pElement);<br></td></tr
><tr
id=sl_svn157_757

><td class="source">		strCurrentText=&quot;&quot;;<br></td></tr
><tr
id=sl_svn157_758

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_759

><td class="source">}<br></td></tr
><tr
id=sl_svn157_760

><td class="source"><br></td></tr
><tr
id=sl_svn157_761

><td class="source">CRTF_HTMLConverter::CRTFNode CRTF_HTMLConverter::R2H_BuildTree(const CString&amp; strSource, CRTFNode* pNodeParent)<br></td></tr
><tr
id=sl_svn157_762

><td class="source">{<br></td></tr
><tr
id=sl_svn157_763

><td class="source">	//Initializing   <br></td></tr
><tr
id=sl_svn157_764

><td class="source">	CString strName;<br></td></tr
><tr
id=sl_svn157_765

><td class="source">	<br></td></tr
><tr
id=sl_svn157_766

><td class="source">	//Extract Node&#39;s Name<br></td></tr
><tr
id=sl_svn157_767

><td class="source">	if ((strSource.GetLength()&gt;2)&amp;&amp;(strSource[0]==&#39;{&#39;)&amp;&amp;(strSource[1]==&#39;\\&#39;)) <br></td></tr
><tr
id=sl_svn157_768

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_769

><td class="source">		for (int iStrPos=2;iStrPos&lt;strSource.GetLength();iStrPos++) <br></td></tr
><tr
id=sl_svn157_770

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_771

><td class="source">			CString strChTest=strSource[iStrPos];<br></td></tr
><tr
id=sl_svn157_772

><td class="source">			if (strChTest.SpanIncluding(&quot; {}\\\r&quot;)!=&quot;&quot;) <br></td></tr
><tr
id=sl_svn157_773

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_774

><td class="source">				break;<br></td></tr
><tr
id=sl_svn157_775

><td class="source">			} <br></td></tr
><tr
id=sl_svn157_776

><td class="source">			else <br></td></tr
><tr
id=sl_svn157_777

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_778

><td class="source">				strName+=strChTest;<br></td></tr
><tr
id=sl_svn157_779

><td class="source">			}<br></td></tr
><tr
id=sl_svn157_780

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_781

><td class="source">	} <br></td></tr
><tr
id=sl_svn157_782

><td class="source">	else <br></td></tr
><tr
id=sl_svn157_783

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_784

><td class="source">		//Invalid RTF Node. RTF Nodes must start with a { and then contain a \NAME identifier<br></td></tr
><tr
id=sl_svn157_785

><td class="source">		ASSERT(FALSE);<br></td></tr
><tr
id=sl_svn157_786

><td class="source">		return CRTFNode();<br></td></tr
><tr
id=sl_svn157_787

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_788

><td class="source">	<br></td></tr
><tr
id=sl_svn157_789

><td class="source">	//Extract pure text<br></td></tr
><tr
id=sl_svn157_790

><td class="source">	CString strNodeText=strSource;<br></td></tr
><tr
id=sl_svn157_791

><td class="source">	strNodeText.Delete(0,1);<br></td></tr
><tr
id=sl_svn157_792

><td class="source">	strNodeText.Delete(strNodeText.GetLength()-1, 1);<br></td></tr
><tr
id=sl_svn157_793

><td class="source">	<br></td></tr
><tr
id=sl_svn157_794

><td class="source">	//Add node into tree<br></td></tr
><tr
id=sl_svn157_795

><td class="source">	CRTFNodeA nodeA;<br></td></tr
><tr
id=sl_svn157_796

><td class="source">	nodeA.m_strCode = strSource;<br></td></tr
><tr
id=sl_svn157_797

><td class="source">	nodeA.m_strName = strName;<br></td></tr
><tr
id=sl_svn157_798

><td class="source">	CRTFNode nodeThis;<br></td></tr
><tr
id=sl_svn157_799

><td class="source">	if (pNodeParent) <br></td></tr
><tr
id=sl_svn157_800

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_801

><td class="source">		nodeThis = pNodeParent-&gt;AddNode(nodeA);      <br></td></tr
><tr
id=sl_svn157_802

><td class="source">	} <br></td></tr
><tr
id=sl_svn157_803

><td class="source">	else <br></td></tr
><tr
id=sl_svn157_804

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_805

><td class="source">		nodeThis = m_RTFTree-&gt;AddNode(nodeA);<br></td></tr
><tr
id=sl_svn157_806

><td class="source">	} <br></td></tr
><tr
id=sl_svn157_807

><td class="source">	<br></td></tr
><tr
id=sl_svn157_808

><td class="source">	//Looking for children<br></td></tr
><tr
id=sl_svn157_809

><td class="source">	CString strNodeNew; <br></td></tr
><tr
id=sl_svn157_810

><td class="source">	CString strThisCode;<br></td></tr
><tr
id=sl_svn157_811

><td class="source">	long lLevel=0; //# Of opened &#39;{&#39;<br></td></tr
><tr
id=sl_svn157_812

><td class="source">	int iStrPos;<br></td></tr
><tr
id=sl_svn157_813

><td class="source"><br></td></tr
><tr
id=sl_svn157_814

><td class="source">	for (iStrPos=0;iStrPos&lt;strNodeText.GetLength();iStrPos++) <br></td></tr
><tr
id=sl_svn157_815

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_816

><td class="source">		CString strChTest=strNodeText[iStrPos];<br></td></tr
><tr
id=sl_svn157_817

><td class="source">		if (strChTest==&quot;{&quot;) <br></td></tr
><tr
id=sl_svn157_818

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_819

><td class="source">			//New element<br></td></tr
><tr
id=sl_svn157_820

><td class="source">			if (lLevel==0) <br></td></tr
><tr
id=sl_svn157_821

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_822

><td class="source">				strNodeNew=&quot;&quot;;<br></td></tr
><tr
id=sl_svn157_823

><td class="source">			} <br></td></tr
><tr
id=sl_svn157_824

><td class="source">			// else Nested Element, will be added during recurse<br></td></tr
><tr
id=sl_svn157_825

><td class="source"><br></td></tr
><tr
id=sl_svn157_826

><td class="source">			lLevel++;<br></td></tr
><tr
id=sl_svn157_827

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_828

><td class="source"><br></td></tr
><tr
id=sl_svn157_829

><td class="source">		if (lLevel&gt;0) <br></td></tr
><tr
id=sl_svn157_830

><td class="source">		{ <br></td></tr
><tr
id=sl_svn157_831

><td class="source">			strNodeNew+=strChTest;<br></td></tr
><tr
id=sl_svn157_832

><td class="source">		} <br></td></tr
><tr
id=sl_svn157_833

><td class="source">		else <br></td></tr
><tr
id=sl_svn157_834

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_835

><td class="source">			strThisCode+=strChTest;<br></td></tr
><tr
id=sl_svn157_836

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_837

><td class="source">		if (strChTest==&quot;}&quot;) <br></td></tr
><tr
id=sl_svn157_838

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_839

><td class="source">			ASSERT(lLevel&gt;0); //Invalid RTF, more closing } than opening ´{<br></td></tr
><tr
id=sl_svn157_840

><td class="source">			lLevel--;<br></td></tr
><tr
id=sl_svn157_841

><td class="source">			if (lLevel==0) <br></td></tr
><tr
id=sl_svn157_842

><td class="source">			{<br></td></tr
><tr
id=sl_svn157_843

><td class="source">				//Recurse (new Sub-Node (child) ready<br></td></tr
><tr
id=sl_svn157_844

><td class="source">				R2H_BuildTree(strNodeNew,&amp;nodeThis);<br></td></tr
><tr
id=sl_svn157_845

><td class="source">			}  <br></td></tr
><tr
id=sl_svn157_846

><td class="source">			// else Nested Element, will be added during recurse<br></td></tr
><tr
id=sl_svn157_847

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_848

><td class="source">	} //loop thru string<br></td></tr
><tr
id=sl_svn157_849

><td class="source">	ASSERT(lLevel==0); //Invalid RTF, more opening { than closing }<br></td></tr
><tr
id=sl_svn157_850

><td class="source">	<br></td></tr
><tr
id=sl_svn157_851

><td class="source">	//Get the plain text (without \)<br></td></tr
><tr
id=sl_svn157_852

><td class="source">	CString strPlain;<br></td></tr
><tr
id=sl_svn157_853

><td class="source">	for (iStrPos=0;iStrPos&lt;strNodeText.GetLength();iStrPos++) <br></td></tr
><tr
id=sl_svn157_854

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_855

><td class="source">		CString strChTest=strNodeText[iStrPos];<br></td></tr
><tr
id=sl_svn157_856

><td class="source">		if (strChTest==&quot;\\&quot;) <br></td></tr
><tr
id=sl_svn157_857

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_858

><td class="source">			CString strTag=R2H_GetRTFTag(strNodeText, iStrPos);<br></td></tr
><tr
id=sl_svn157_859

><td class="source">			iStrPos+=strTag.GetLength();<br></td></tr
><tr
id=sl_svn157_860

><td class="source">			if (((iStrPos+1)&lt;strNodeText.GetLength())&amp;&amp;(strNodeText[iStrPos+1]==&#39; &#39;)) <br></td></tr
><tr
id=sl_svn157_861

><td class="source">				iStrPos++; //Ignore Blank after Tag<br></td></tr
><tr
id=sl_svn157_862

><td class="source">		} <br></td></tr
><tr
id=sl_svn157_863

><td class="source">		else <br></td></tr
><tr
id=sl_svn157_864

><td class="source">		{<br></td></tr
><tr
id=sl_svn157_865

><td class="source">			strPlain+=strChTest;<br></td></tr
><tr
id=sl_svn157_866

><td class="source">		}<br></td></tr
><tr
id=sl_svn157_867

><td class="source">	} //loop thru string<br></td></tr
><tr
id=sl_svn157_868

><td class="source">	<br></td></tr
><tr
id=sl_svn157_869

><td class="source">	nodeThis-&gt;m_strPlain=strPlain;<br></td></tr
><tr
id=sl_svn157_870

><td class="source">	nodeThis-&gt;m_strThisCode = strThisCode;<br></td></tr
><tr
id=sl_svn157_871

><td class="source">	return nodeThis;<br></td></tr
><tr
id=sl_svn157_872

><td class="source">}<br></td></tr
><tr
id=sl_svn157_873

><td class="source"><br></td></tr
><tr
id=sl_svn157_874

><td class="source">CString&amp; operator&lt;&lt; ( CString&amp; os, CRTF_HTMLConverter&amp; conv )<br></td></tr
><tr
id=sl_svn157_875

><td class="source">{<br></td></tr
><tr
id=sl_svn157_876

><td class="source">	//For streaming operations<br></td></tr
><tr
id=sl_svn157_877

><td class="source">	if (conv.m_enMode==CRTF_HTMLConverter::c_modRTF2HTML) <br></td></tr
><tr
id=sl_svn157_878

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_879

><td class="source">		os = conv.m_strHTML;<br></td></tr
><tr
id=sl_svn157_880

><td class="source">	} <br></td></tr
><tr
id=sl_svn157_881

><td class="source">	else <br></td></tr
><tr
id=sl_svn157_882

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_883

><td class="source">		os = conv.m_strHTML;<br></td></tr
><tr
id=sl_svn157_884

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_885

><td class="source">	return os;<br></td></tr
><tr
id=sl_svn157_886

><td class="source">}<br></td></tr
><tr
id=sl_svn157_887

><td class="source"><br></td></tr
><tr
id=sl_svn157_888

><td class="source">CString&amp; operator&gt;&gt; ( CString&amp; is, CRTF_HTMLConverter&amp; conv )<br></td></tr
><tr
id=sl_svn157_889

><td class="source">{<br></td></tr
><tr
id=sl_svn157_890

><td class="source">	//For streaming operations<br></td></tr
><tr
id=sl_svn157_891

><td class="source">	CString strTemp;<br></td></tr
><tr
id=sl_svn157_892

><td class="source">	strTemp = is;<br></td></tr
><tr
id=sl_svn157_893

><td class="source">	//RTF-&gt;HTML<br></td></tr
><tr
id=sl_svn157_894

><td class="source">	if (conv.m_enMode==CRTF_HTMLConverter::c_modRTF2HTML) <br></td></tr
><tr
id=sl_svn157_895

><td class="source">	{<br></td></tr
><tr
id=sl_svn157_896

><td class="source">		conv.m_strRTF = strTemp;<br></td></tr
><tr
id=sl_svn157_897

><td class="source">		conv.ConvertRTF2HTML(TRUE);<br></td></tr
><tr
id=sl_svn157_898

><td class="source">	}<br></td></tr
><tr
id=sl_svn157_899

><td class="source">	return is;<br></td></tr
><tr
id=sl_svn157_900

><td class="source">}<br></td></tr
><tr
id=sl_svn157_901

><td class="source"><br></td></tr
><tr
id=sl_svn157_902

><td class="source">CRTF_HTMLConverter::CHTMLElement::CHTMLElement(THTMLNodeType type, LPCTSTR szText)<br></td></tr
><tr
id=sl_svn157_903

><td class="source">	: m_enNodeType(type), m_strNodeText(szText)<br></td></tr
><tr
id=sl_svn157_904

><td class="source">{<br></td></tr
><tr
id=sl_svn157_905

><td class="source">}<br></td></tr
></table></pre>
<pre class="prettyprint"><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn157_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn157_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta('', 'p', 'local-todolist', this)">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta('', 'p', 'local-todolist', this)">Hide details</a>
 </div>
 <div class="ifExpand">
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/local-todolist/source/detail?spec=svn157&r=33">r33</a>
 by jamesfancy
 on Jun 10, 2007
 &nbsp; <a href="/p/local-todolist/source/diff?spec=svn157&r=33&amp;format=side&amp;path=/en/5.2.4/3rdParty/rtf2html/RTF2HTMLConverter.cpp&amp;old_path=/en/current/3rdParty/rtf2html/RTF2HTMLConverter.cpp&amp;old=27">Diff</a>
 </div>
 <pre>make tag for 5.2.4</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/local-todolist/source/detail?r=33&spec=svn157';
 var publish_url = '/p/local-todolist/source/detail?r=33&spec=svn157#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/en/5.2.4');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/3rdParty/Ini.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/3rdParty/Ini.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/3rdParty/StatLink.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/3rdParty/StatLink.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/3rdParty/StatLink.h');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/3rdParty/StatLink.h?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/DateHelper.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/DateHelper.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/HookMgr.h');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/HookMgr.h?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/MouseWheelMgr.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/MouseWheelMgr.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/OrderedTreeCtrl.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/OrderedTreeCtrl.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/enbrowserctrl.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/enbrowserctrl.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/enedit.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/enedit.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/enedit.h');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/enedit.h?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/enfiledialog.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/enfiledialog.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/enstatic.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/enstatic.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/enstatic.h');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/enstatic.h?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/entoolbar.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/entoolbar.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/entoolbar.h');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/entoolbar.h?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/fileedit.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/fileedit.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/Shared/fileedit.h');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/Shared/fileedit.h?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/ToDoList/TaskFile.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/ToDoList/TaskFile.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/ToDoList/ToDoCtrl.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoCtrl.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/ToDoList/ToDoCtrlData.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoCtrlData.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/ToDoList/ToDoCtrlData.h');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoCtrlData.h?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/ToDoList/ToDoCtrlMgr.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoCtrlMgr.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/ToDoList/ToDoList.rc');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoList.rc?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/ToDoList/ToDoListWnd.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoListWnd.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/ToDoList/tdcstruct.h');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/ToDoList/tdcstruct.h?r\x3d33\x26spec\x3dsvn157');
 
 
 changed_paths.push('/en/5.2.4/iCalImportExport/iCalExporter.cpp');
 changed_urls.push('/p/local-todolist/source/browse/en/5.2.4/iCalImportExport/iCalExporter.cpp?r\x3d33\x26spec\x3dsvn157');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/local-todolist/source/browse/en/5.2.4?r=33&amp;spec=svn157"
 
 >/en/5.2.4</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/3rdParty/Ini.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/3rdParty/Ini.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/3rdParty/StatLink.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/3rdParty/StatLink.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/3rdParty/StatLink.h?r=33&amp;spec=svn157"
 
 >/en/5.2.4/3rdParty/StatLink.h</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/DateHelper.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/DateHelper.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/HookMgr.h?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/HookMgr.h</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/MouseWheelMgr.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/MouseWheelMgr.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/OrderedTreeCtrl.cpp?r=33&amp;spec=svn157"
 
 >...5.2.4/Shared/OrderedTreeCtrl.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/enbrowserctrl.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/enbrowserctrl.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/enedit.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/enedit.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/enedit.h?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/enedit.h</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/enfiledialog.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/enfiledialog.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/enstatic.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/enstatic.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/enstatic.h?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/enstatic.h</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/entoolbar.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/entoolbar.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/entoolbar.h?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/entoolbar.h</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/fileedit.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/fileedit.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/Shared/fileedit.h?r=33&amp;spec=svn157"
 
 >/en/5.2.4/Shared/fileedit.h</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/ToDoList/TaskFile.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/ToDoList/TaskFile.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoCtrl.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/ToDoList/ToDoCtrl.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoCtrlData.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/ToDoList/ToDoCtrlData.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoCtrlData.h?r=33&amp;spec=svn157"
 
 >/en/5.2.4/ToDoList/ToDoCtrlData.h</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoCtrlMgr.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/ToDoList/ToDoCtrlMgr.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoList.rc?r=33&amp;spec=svn157"
 
 >/en/5.2.4/ToDoList/ToDoList.rc</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/ToDoList/ToDoListWnd.cpp?r=33&amp;spec=svn157"
 
 >/en/5.2.4/ToDoList/ToDoListWnd.cpp</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/ToDoList/tdcstruct.h?r=33&amp;spec=svn157"
 
 >/en/5.2.4/ToDoList/tdcstruct.h</option>
 
 <option value="/p/local-todolist/source/browse/en/5.2.4/iCalImportExport/iCalExporter.cpp?r=33&amp;spec=svn157"
 
 >...CalImportExport/iCalExporter.cpp</option>
 
 </select>
 </td></tr></table>
 
 
 



 <div style="white-space:nowrap">
 Project members,
 <a href="https://www.google.com/accounts/ServiceLogin?service=code&amp;ltmpl=phosting&amp;continue=http%3A%2F%2Fcode.google.com%2Fp%2Flocal-todolist%2Fsource%2Fbrowse%2Fen%2F5.2.4%2F3rdParty%2Frtf2html%2FRTF2HTMLConverter.cpp&amp;followup=http%3A%2F%2Fcode.google.com%2Fp%2Flocal-todolist%2Fsource%2Fbrowse%2Fen%2F5.2.4%2F3rdParty%2Frtf2html%2FRTF2HTMLConverter.cpp"
 >sign in</a> to write a code review</div>


 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/local-todolist/source/detail?spec=svn157&r=27">r27</a>
 by jamesfancy
 on Jun 03, 2007
 &nbsp; <a href="/p/local-todolist/source/diff?spec=svn157&r=27&amp;format=side&amp;path=/en/current/3rdParty/rtf2html/RTF2HTMLConverter.cpp&amp;old_path=/en/current/3rdParty/rtf2html/RTF2HTMLConverter.cpp&amp;old=19">Diff</a>
 <br>
 <pre class="ifOpened">Upgrade to 5.2</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/local-todolist/source/detail?spec=svn157&r=19">r19</a>
 by jamesfancy
 on Feb 04, 2007
 &nbsp; <a href="/p/local-todolist/source/diff?spec=svn157&r=19&amp;format=side&amp;path=/en/current/3rdParty/rtf2html/RTF2HTMLConverter.cpp&amp;old_path=/en/current/3rdParty/rtf2html/RTF2HTMLConverter.cpp&amp;old=0">Diff</a>
 <br>
 <pre class="ifOpened">Update to 5.1.1
From this edition, check in all source
code.
Please read the article at http://www
codeproject.com/tools/todolist2.asp to
...</pre>
 </div>
 
 
 <a href="/p/local-todolist/source/list?path=/en/5.2.4/3rdParty/rtf2html/RTF2HTMLConverter.cpp&start=33">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 25832 bytes,
 905 lines</div>
 
 <div><a href="http://local-todolist.googlecode.com/svn/en/5.2.4/3rdParty/rtf2html/RTF2HTMLConverter.cpp">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="http://www.gstatic.com/codesite/ph/15655628546230588420/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="http://www.gstatic.com/codesite/ph/15655628546230588420/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://kibbles.googlecode.com/files/kibbles-1.3.3.comp.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initilized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initilized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initilized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initilized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="http://www.gstatic.com/codesite/ph/15655628546230588420/js/code_review_scripts.js"></script>
<script type="text/javascript">
 
 // the comment form template
 var form = '<div class="draft"><div class="header"><span class="title">Draft comment:</span></div>' +
 '<div class="body"><form onsubmit="return false;"><textarea id="$ID">$BODY</textarea><br>$ACTIONS</form></div>' +
 '</div>';
 // the comment "plate" template used for both draft and published comment "plates".
 var draft_comment = '<div class="draft" ondblclick="$ONDBLCLICK">' +
 '<div class="header"><span class="title">Draft comment:</span><span class="actions">$ACTIONS</span></div>' +
 '<pre id="$ID" class="body">$BODY</pre>' +
 '</div>';
 var published_comment = '<div class="published">' +
 '<div class="header"><span class="title"><a href="$PROFILE_URL">$AUTHOR:</a></span><div>' +
 '<pre id="$ID" class="body">$BODY</pre>' +
 '</div>';

 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn157': '/en/5.2.4/3rdParty/rtf2html/RTF2HTMLConverter.cpp'}
 CR_setup('', 'p', 'local-todolist', '', 'svn157', paths,
 '', CR_BrowseIntegrationFactory);
 // register our hidden ui elements with the code commenting code ui builder.
 CR_registerLayoutElement('form', form);
 CR_registerLayoutElement('draft_comment', draft_comment);
 CR_registerLayoutElement('published_comment', published_comment);
 
 CR_registerActivityListener(CR_ACTIVITY_TYPE.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 CR_registerActivityListener(CR_ACTIVITY_TYPE.REVEAL_PUB_PLATE, pubRevealed);
 CR_registerActivityListener(CR_ACTIVITY_TYPE.REVEAL_DRAFT_PLATE, draftRevealed);
 CR_registerActivityListener(CR_ACTIVITY_TYPE.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initilized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="http://www.gstatic.com/codesite/ph/15655628546230588420/js/dit_scripts.js"></script>

 
 
 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/15655628546230588420/js/core_scripts_20081103.js"></script>
 <script type="text/javascript" src="/js/codesite_product_dictionary_ph.pack.04102009.js"></script>
</div> 
<div id="footer" dir="ltr">
 
 <div class="text">
 
 &copy;2010 Google -
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>
 
 


 
 </body>
</html>

