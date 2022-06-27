<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (1.8.0_322) on Sun May 29 14:50:06 CEST 2022 -->
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>ConnectResponse (Apache ZooKeeper - Jute 3.5.10 API)</title>
<meta name="date" content="2022-05-29">
<link rel="stylesheet" type="text/css" href="../../../../stylesheet.css" title="Style">
<script type="text/javascript" src="../../../../script.js"></script>
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="ConnectResponse (Apache ZooKeeper - Jute 3.5.10 API)";
        }
    }
    catch(err) {
    }
//-->
var methods = {"i0":10,"i1":10,"i2":10,"i3":10,"i4":10,"i5":10,"i6":10,"i7":10,"i8":10,"i9":10,"i10":10,"i11":10,"i12":10,"i13":10,"i14":9,"i15":10,"i16":10};
var tabs = {65535:["t0","All Methods"],1:["t1","Static Methods"],2:["t2","Instance Methods"],8:["t4","Concrete Methods"]};
var altColor = "altColor";
var rowColor = "rowColor";
var tableTab = "tableTab";
var activeTableTab = "activeTableTab";
</script>
<noscript>
<div>JavaScript is disabled on your browser.</div>
</noscript>
<!-- ========= START OF TOP NAVBAR ======= -->
<div class="topNav"><a name="navbar.top">
<!--   -->
</a>
<div class="skipNav"><a href="#skip.navbar.top" title="Skip navigation links">Skip navigation links</a></div>
<a name="navbar.top.firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/ConnectResponse.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/zookeeper/proto/ConnectRequest.html" title="class in org.apache.zookeeper.proto"><span class="typeNameLink">Prev&nbsp;Class</span></a></li>
<li><a href="../../../../org/apache/zookeeper/proto/Create2Response.html" title="class in org.apache.zookeeper.proto"><span class="typeNameLink">Next&nbsp;Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/zookeeper/proto/ConnectResponse.html" target="_top">Frames</a></li>
<li><a href="ConnectResponse.html" target="_top">No&nbsp;Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../allclasses-noframe.html">All&nbsp;Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_top");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li>Nested&nbsp;|&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.detail">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.detail">Method</a></li>
</ul>
</div>
<a name="skip.navbar.top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<!-- ======== START OF CLASS DATA ======== -->
<div class="header">
<div class="subTitle">org.apache.zookeeper.proto</div>
<h2 title="Class ConnectResponse" class="title">Class ConnectResponse</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li>org.apache.zookeeper.proto.ConnectResponse</li>
</ul>
</li>
</ul>
<div class="description">
<ul class="blockList">
<li class="blockList">
<dl>
<dt>All Implemented Interfaces:</dt>
<dd><a href="../../../../org/apache/jute/Record.html" title="interface in org.apache.jute">Record</a></dd>
</dl>
<hr>
<br>
<pre>@InterfaceAudience.Public
public class <span class="typeNameLabel">ConnectResponse</span>
extends <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a>
implements <a href="../../../../org/apache/jute/Record.html" title="interface in org.apache.jute">Record</a></pre>
</li>
</ul>
</div>
<div class="summary">
<ul class="blockList">
<li class="blockList">
<!-- ======== CONSTRUCTOR SUMMARY ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor.summary">
<!--   -->
</a>
<h3>Constructor Summary</h3>
<table class="memberSummary" border="0" cellpadding="3" cellspacing="0" summary="Constructor Summary table, listing constructors, and an explanation">
<caption><span>Constructors</span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tr class="altColor">
<td class="colOne"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#ConnectResponse--">ConnectResponse</a></span>()</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colOne"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#ConnectResponse-int-int-long-byte:A-">ConnectResponse</a></span>(int&nbsp;protocolVersion,
               int&nbsp;timeOut,
               long&nbsp;sessionId,
               byte[]&nbsp;passwd)</code>&nbsp;</td>
</tr>
</table>
</li>
</ul>
<!-- ========== METHOD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="method.summary">
<!--   -->
</a>
<h3>Method Summary</h3>
<table class="memberSummary" border="0" cellpadding="3" cellspacing="0" summary="Method Summary table, listing methods, and an explanation">
<caption><span id="t0" class="activeTableTab"><span>All Methods</span><span class="tabEnd">&nbsp;</span></span><span id="t1" class="tableTab"><span><a href="javascript:show(1);">Static Methods</a></span><span class="tabEnd">&nbsp;</span></span><span id="t2" class="tableTab"><span><a href="javascript:show(2);">Instance Methods</a></span><span class="tabEnd">&nbsp;</span></span><span id="t4" class="tableTab"><span><a href="javascript:show(8);">Concrete Methods</a></span><span class="tabEnd">&nbsp;</span></span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tr id="i0" class="altColor">
<td class="colFirst"><code>int</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#compareTo-java.lang.Object-">compareTo</a></span>(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a>&nbsp;peer_)</code>&nbsp;</td>
</tr>
<tr id="i1" class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#deserialize-org.apache.jute.InputArchive-java.lang.String-">deserialize</a></span>(<a href="../../../../org/apache/jute/InputArchive.html" title="interface in org.apache.jute">InputArchive</a>&nbsp;a_,
           <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;tag)</code>&nbsp;</td>
</tr>
<tr id="i2" class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#equals-java.lang.Object-">equals</a></span>(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a>&nbsp;peer_)</code>&nbsp;</td>
</tr>
<tr id="i3" class="rowColor">
<td class="colFirst"><code>byte[]</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#getPasswd--">getPasswd</a></span>()</code>&nbsp;</td>
</tr>
<tr id="i4" class="altColor">
<td class="colFirst"><code>int</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#getProtocolVersion--">getProtocolVersion</a></span>()</code>&nbsp;</td>
</tr>
<tr id="i5" class="rowColor">
<td class="colFirst"><code>long</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#getSessionId--">getSessionId</a></span>()</code>&nbsp;</td>
</tr>
<tr id="i6" class="altColor">
<td class="colFirst"><code>int</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#getTimeOut--">getTimeOut</a></span>()</code>&nbsp;</td>
</tr>
<tr id="i7" class="rowColor">
<td class="colFirst"><code>int</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#hashCode--">hashCode</a></span>()</code>&nbsp;</td>
</tr>
<tr id="i8" class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#readFields-java.io.DataInput-">readFields</a></span>(<a href="https://docs.oracle.com/javase/8/docs/api/java/io/DataInput.html?is-external=true" title="class or interface in java.io">DataInput</a>&nbsp;in)</code>&nbsp;</td>
</tr>
<tr id="i9" class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#serialize-org.apache.jute.OutputArchive-java.lang.String-">serialize</a></span>(<a href="../../../../org/apache/jute/OutputArchive.html" title="interface in org.apache.jute">OutputArchive</a>&nbsp;a_,
         <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;tag)</code>&nbsp;</td>
</tr>
<tr id="i10" class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#setPasswd-byte:A-">setPasswd</a></span>(byte[]&nbsp;m_)</code>&nbsp;</td>
</tr>
<tr id="i11" class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#setProtocolVersion-int-">setProtocolVersion</a></span>(int&nbsp;m_)</code>&nbsp;</td>
</tr>
<tr id="i12" class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#setSessionId-long-">setSessionId</a></span>(long&nbsp;m_)</code>&nbsp;</td>
</tr>
<tr id="i13" class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#setTimeOut-int-">setTimeOut</a></span>(int&nbsp;m_)</code>&nbsp;</td>
</tr>
<tr id="i14" class="altColor">
<td class="colFirst"><code>static <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a></code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#signature--">signature</a></span>()</code>&nbsp;</td>
</tr>
<tr id="i15" class="rowColor">
<td class="colFirst"><code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a></code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#toString--">toString</a></span>()</code>&nbsp;</td>
</tr>
<tr id="i16" class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/proto/ConnectResponse.html#write-java.io.DataOutput-">write</a></span>(<a href="https://docs.oracle.com/javase/8/docs/api/java/io/DataOutput.html?is-external=true" title="class or interface in java.io">DataOutput</a>&nbsp;out)</code>&nbsp;</td>
</tr>
</table>
<ul class="blockList">
<li class="blockList"><a name="methods.inherited.from.class.java.lang.Object">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></h3>
<code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#clone--" title="class or interface in java.lang">clone</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#finalize--" title="class or interface in java.lang">finalize</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#getClass--" title="class or interface in java.lang">getClass</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#notify--" title="class or interface in java.lang">notify</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#notifyAll--" title="class or interface in java.lang">notifyAll</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait--" title="class or interface in java.lang">wait</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait-long-" title="class or interface in java.lang">wait</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait-long-int-" title="class or interface in java.lang">wait</a></code></li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
<div class="details">
<ul class="blockList">
<li class="blockList">
<!-- ========= CONSTRUCTOR DETAIL ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor.detail">
<!--   -->
</a>
<h3>Constructor Detail</h3>
<a name="ConnectResponse--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>ConnectResponse</h4>
<pre>public&nbsp;ConnectResponse()</pre>
</li>
</ul>
<a name="ConnectResponse-int-int-long-byte:A-">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>ConnectResponse</h4>
<pre>public&nbsp;ConnectResponse(int&nbsp;protocolVersion,
                       int&nbsp;timeOut,
                       long&nbsp;sessionId,
                       byte[]&nbsp;passwd)</pre>
</li>
</ul>
</li>
</ul>
<!-- ============ METHOD DETAIL ========== -->
<ul class="blockList">
<li class="blockList"><a name="method.detail">
<!--   -->
</a>
<h3>Method Detail</h3>
<a name="getProtocolVersion--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getProtocolVersion</h4>
<pre>public&nbsp;int&nbsp;getProtocolVersion()</pre>
</li>
</ul>
<a name="setProtocolVersion-int-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>setProtocolVersion</h4>
<pre>public&nbsp;void&nbsp;setProtocolVersion(int&nbsp;m_)</pre>
</li>
</ul>
<a name="getTimeOut--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getTimeOut</h4>
<pre>public&nbsp;int&nbsp;getTimeOut()</pre>
</li>
</ul>
<a name="setTimeOut-int-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>setTimeOut</h4>
<pre>public&nbsp;void&nbsp;setTimeOut(int&nbsp;m_)</pre>
</li>
</ul>
<a name="getSessionId--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getSessionId</h4>
<pre>public&nbsp;long&nbsp;getSessionId()</pre>
</li>
</ul>
<a name="setSessionId-long-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>setSessionId</h4>
<pre>public&nbsp;void&nbsp;setSessionId(long&nbsp;m_)</pre>
</li>
</ul>
<a name="getPasswd--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getPasswd</h4>
<pre>public&nbsp;byte[]&nbsp;getPasswd()</pre>
</li>
</ul>
<a name="setPasswd-byte:A-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>setPasswd</h4>
<pre>public&nbsp;void&nbsp;setPasswd(byte[]&nbsp;m_)</pre>
</li>
</ul>
<a name="serialize-org.apache.jute.OutputArchive-java.lang.String-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>serialize</h4>
<pre>public&nbsp;void&nbsp;serialize(<a href="../../../../org/apache/jute/OutputArchive.html" title="interface in org.apache.jute">OutputArchive</a>&nbsp;a_,
                      <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;tag)
               throws <a href="https://docs.oracle.com/javase/8/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io">IOException</a></pre>
<dl>
<dt><span class="overrideSpecifyLabel">Specified by:</span></dt>
<dd><code><a href="../../../../org/apache/jute/Record.html#serialize-org.apache.jute.OutputArchive-java.lang.String-">serialize</a></code>&nbsp;in interface&nbsp;<code><a href="../../../../org/apache/jute/Record.html" title="interface in org.apache.jute">Record</a></code></dd>
<dt><span class="throwsLabel">Throws:</span></dt>
<dd><code><a href="https://docs.oracle.com/javase/8/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io">IOException</a></code></dd>
</dl>
</li>
</ul>
<a name="deserialize-org.apache.jute.InputArchive-java.lang.String-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>deserialize</h4>
<pre>public&nbsp;void&nbsp;deserialize(<a href="../../../../org/apache/jute/InputArchive.html" title="interface in org.apache.jute">InputArchive</a>&nbsp;a_,
                        <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;tag)
                 throws <a href="https://docs.oracle.com/javase/8/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io">IOException</a></pre>
<dl>
<dt><span class="overrideSpecifyLabel">Specified by:</span></dt>
<dd><code><a href="../../../../org/apache/jute/Record.html#deserialize-org.apache.jute.InputArchive-java.lang.String-">deserialize</a></code>&nbsp;in interface&nbsp;<code><a href="../../../../org/apache/jute/Record.html" title="interface in org.apache.jute">Record</a></code></dd>
<dt><span class="throwsLabel">Throws:</span></dt>
<dd><code><a href="https://docs.oracle.com/javase/8/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io">IOException</a></code></dd>
</dl>
</li>
</ul>
<a name="toString--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>toString</h4>
<pre>public&nbsp;<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;toString()</pre>
<dl>
<dt><span class="overrideSpecifyLabel">Overrides:</span></dt>
<dd><code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#toString--" title="class or interface in java.lang">toString</a></code>&nbsp;in class&nbsp;<code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></code></dd>
</dl>
</li>
</ul>
<a name="write-java.io.DataOutput-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>write</h4>
<pre>public&nbsp;void&nbsp;write(<a href="https://docs.oracle.com/javase/8/docs/api/java/io/DataOutput.html?is-external=true" title="class or interface in java.io">DataOutput</a>&nbsp;out)
           throws <a href="https://docs.oracle.com/javase/8/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io">IOException</a></pre>
<dl>
<dt><span class="throwsLabel">Throws:</span></dt>
<dd><code><a href="https://docs.oracle.com/javase/8/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io">IOException</a></code></dd>
</dl>
</li>
</ul>
<a name="readFields-java.io.DataInput-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>readFields</h4>
<pre>public&nbsp;void&nbsp;readFields(<a href="https://docs.oracle.com/javase/8/docs/api/java/io/DataInput.html?is-external=true" title="class or interface in java.io">DataInput</a>&nbsp;in)
                throws <a href="https://docs.oracle.com/javase/8/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io">IOException</a></pre>
<dl>
<dt><span class="throwsLabel">Throws:</span></dt>
<dd><code><a href="https://docs.oracle.com/javase/8/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io">IOException</a></code></dd>
</dl>
</li>
</ul>
<a name="compareTo-java.lang.Object-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>compareTo</h4>
<pre>public&nbsp;int&nbsp;compareTo(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a>&nbsp;peer_)
              throws <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/ClassCastException.html?is-external=true" title="class or interface in java.lang">ClassCastException</a></pre>
<dl>
<dt><span class="throwsLabel">Throws:</span></dt>
<dd><code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/ClassCastException.html?is-external=true" title="class or interface in java.lang">ClassCastException</a></code></dd>
</dl>
</li>
</ul>
<a name="equals-java.lang.Object-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>equals</h4>
<pre>public&nbsp;boolean&nbsp;equals(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a>&nbsp;peer_)</pre>
<dl>
<dt><span class="overrideSpecifyLabel">Overrides:</span></dt>
<dd><code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#equals-java.lang.Object-" title="class or interface in java.lang">equals</a></code>&nbsp;in class&nbsp;<code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></code></dd>
</dl>
</li>
</ul>
<a name="hashCode--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>hashCode</h4>
<pre>public&nbsp;int&nbsp;hashCode()</pre>
<dl>
<dt><span class="overrideSpecifyLabel">Overrides:</span></dt>
<dd><code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#hashCode--" title="class or interface in java.lang">hashCode</a></code>&nbsp;in class&nbsp;<code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></code></dd>
</dl>
</li>
</ul>
<a name="signature--">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>signature</h4>
<pre>public static&nbsp;<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;signature()</pre>
</li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
</div>
<!-- ========= END OF CLASS DATA ========= -->
<!-- ======= START OF BOTTOM NAVBAR ====== -->
<div class="bottomNav"><a name="navbar.bottom">
<!--   -->
</a>
<div class="skipNav"><a href="#skip.navbar.bottom" title="Skip navigation links">Skip navigation links</a></div>
<a name="navbar.bottom.firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/ConnectResponse.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/zookeeper/proto/ConnectRequest.html" title="class in org.apache.zookeeper.proto"><span class="typeNameLink">Prev&nbsp;Class</span></a></li>
<li><a href="../../../../org/apache/zookeeper/proto/Create2Response.html" title="class in org.apache.zookeeper.proto"><span class="typeNameLink">Next&nbsp;Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/zookeeper/proto/ConnectResponse.html" target="_top">Frames</a></li>
<li><a href="ConnectResponse.html" target="_top">No&nbsp;Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../allclasses-noframe.html">All&nbsp;Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_bottom");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li>Nested&nbsp;|&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.detail">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.detail">Method</a></li>
</ul>
</div>
<a name="skip.navbar.bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small>Copyright &#169; 2008&#x2013;2022 <a href="https://www.apache.org/">The Apache Software Foundation</a>. All rights reserved.</small></p>
</body>
</html>
