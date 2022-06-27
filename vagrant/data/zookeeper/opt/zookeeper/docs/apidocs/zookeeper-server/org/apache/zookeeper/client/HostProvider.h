<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (1.8.0_322) on Sun May 29 14:50:12 CEST 2022 -->
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>HostProvider (Apache ZooKeeper - Server 3.5.10 API)</title>
<meta name="date" content="2022-05-29">
<link rel="stylesheet" type="text/css" href="../../../../stylesheet.css" title="Style">
<script type="text/javascript" src="../../../../script.js"></script>
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="HostProvider (Apache ZooKeeper - Server 3.5.10 API)";
        }
    }
    catch(err) {
    }
//-->
var methods = {"i0":6,"i1":6,"i2":6,"i3":6};
var tabs = {65535:["t0","All Methods"],2:["t2","Instance Methods"],4:["t3","Abstract Methods"]};
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
<li><a href="class-use/HostProvider.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/zookeeper/client/FourLetterWordMain.html" title="class in org.apache.zookeeper.client"><span class="typeNameLink">Prev&nbsp;Class</span></a></li>
<li><a href="../../../../org/apache/zookeeper/client/StaticHostProvider.html" title="class in org.apache.zookeeper.client"><span class="typeNameLink">Next&nbsp;Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/zookeeper/client/HostProvider.html" target="_top">Frames</a></li>
<li><a href="HostProvider.html" target="_top">No&nbsp;Frames</a></li>
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
<li>Constr&nbsp;|&nbsp;</li>
<li><a href="#method.summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li>Constr&nbsp;|&nbsp;</li>
<li><a href="#method.detail">Method</a></li>
</ul>
</div>
<a name="skip.navbar.top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<!-- ======== START OF CLASS DATA ======== -->
<div class="header">
<div class="subTitle">org.apache.zookeeper.client</div>
<h2 title="Interface HostProvider" class="title">Interface HostProvider</h2>
</div>
<div class="contentContainer">
<div class="description">
<ul class="blockList">
<li class="blockList">
<dl>
<dt>All Known Implementing Classes:</dt>
<dd><a href="../../../../org/apache/zookeeper/client/StaticHostProvider.html" title="class in org.apache.zookeeper.client">StaticHostProvider</a></dd>
</dl>
<hr>
<br>
<pre>@InterfaceAudience.Public
public interface <span class="typeNameLabel">HostProvider</span></pre>
<div class="block">A set of hosts a ZooKeeper client should connect to.
 
 Classes implementing this interface must guarantee the following:
 
 * Every call to next() returns an InetSocketAddress. So the iterator never
 ends.
 
 * The size() of a HostProvider may never be zero.
 
 A HostProvider must return resolved InetSocketAddress instances on next() if the next address is resolvable.
 In that case, it's up to the HostProvider, whether it returns the next resolvable address in the list or return
 the next one as UnResolved.
 
 Different HostProvider could be imagined:
 
 * A HostProvider that loads the list of Hosts from an URL or from DNS 
 * A HostProvider that re-resolves the InetSocketAddress after a timeout. 
 * A HostProvider that prefers nearby hosts.</div>
</li>
</ul>
</div>
<div class="summary">
<ul class="blockList">
<li class="blockList">
<!-- ========== METHOD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="method.summary">
<!--   -->
</a>
<h3>Method Summary</h3>
<table class="memberSummary" border="0" cellpadding="3" cellspacing="0" summary="Method Summary table, listing methods, and an explanation">
<caption><span id="t0" class="activeTableTab"><span>All Methods</span><span class="tabEnd">&nbsp;</span></span><span id="t2" class="tableTab"><span><a href="javascript:show(2);">Instance Methods</a></span><span class="tabEnd">&nbsp;</span></span><span id="t3" class="tableTab"><span><a href="javascript:show(4);">Abstract Methods</a></span><span class="tabEnd">&nbsp;</span></span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tr id="i0" class="altColor">
<td class="colFirst"><code><a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true" title="class or interface in java.net">InetSocketAddress</a></code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/client/HostProvider.html#next-long-">next</a></span>(long&nbsp;spinDelay)</code>
<div class="block">The next host to try to connect to.</div>
</td>
</tr>
<tr id="i1" class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/client/HostProvider.html#onConnected--">onConnected</a></span>()</code>
<div class="block">Notify the HostProvider of a successful connection.</div>
</td>
</tr>
<tr id="i2" class="altColor">
<td class="colFirst"><code>int</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/client/HostProvider.html#size--">size</a></span>()</code>&nbsp;</td>
</tr>
<tr id="i3" class="rowColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/client/HostProvider.html#updateServerList-java.util.Collection-java.net.InetSocketAddress-">updateServerList</a></span>(<a href="https://docs.oracle.com/javase/8/docs/api/java/util/Collection.html?is-external=true" title="class or interface in java.util">Collection</a>&lt;<a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true" title="class or interface in java.net">InetSocketAddress</a>&gt;&nbsp;serverAddresses,
                <a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true" title="class or interface in java.net">InetSocketAddress</a>&nbsp;currentHost)</code>
<div class="block">Update the list of servers.</div>
</td>
</tr>
</table>
</li>
</ul>
</li>
</ul>
</div>
<div class="details">
<ul class="blockList">
<li class="blockList">
<!-- ============ METHOD DETAIL ========== -->
<ul class="blockList">
<li class="blockList"><a name="method.detail">
<!--   -->
</a>
<h3>Method Detail</h3>
<a name="size--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>size</h4>
<pre>int&nbsp;size()</pre>
</li>
</ul>
<a name="next-long-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>next</h4>
<pre><a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true" title="class or interface in java.net">InetSocketAddress</a>&nbsp;next(long&nbsp;spinDelay)</pre>
<div class="block">The next host to try to connect to.
 
 For a spinDelay of 0 there should be no wait.</div>
<dl>
<dt><span class="paramLabel">Parameters:</span></dt>
<dd><code>spinDelay</code> - Milliseconds to wait if all hosts have been tried once.</dd>
</dl>
</li>
</ul>
<a name="onConnected--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>onConnected</h4>
<pre>void&nbsp;onConnected()</pre>
<div class="block">Notify the HostProvider of a successful connection.
 
 The HostProvider may use this notification to reset it's inner state.</div>
</li>
</ul>
<a name="updateServerList-java.util.Collection-java.net.InetSocketAddress-">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>updateServerList</h4>
<pre>boolean&nbsp;updateServerList(<a href="https://docs.oracle.com/javase/8/docs/api/java/util/Collection.html?is-external=true" title="class or interface in java.util">Collection</a>&lt;<a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true" title="class or interface in java.net">InetSocketAddress</a>&gt;&nbsp;serverAddresses,
                         <a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true" title="class or interface in java.net">InetSocketAddress</a>&nbsp;currentHost)</pre>
<div class="block">Update the list of servers. This returns true if changing connections is necessary for load-balancing, false otherwise.</div>
<dl>
<dt><span class="paramLabel">Parameters:</span></dt>
<dd><code>serverAddresses</code> - new host list</dd>
<dd><code>currentHost</code> - the host to which this client is currently connected</dd>
<dt><span class="returnLabel">Returns:</span></dt>
<dd>true if changing connections is necessary for load-balancing, false otherwise</dd>
</dl>
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
<li><a href="class-use/HostProvider.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/zookeeper/client/FourLetterWordMain.html" title="class in org.apache.zookeeper.client"><span class="typeNameLink">Prev&nbsp;Class</span></a></li>
<li><a href="../../../../org/apache/zookeeper/client/StaticHostProvider.html" title="class in org.apache.zookeeper.client"><span class="typeNameLink">Next&nbsp;Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/zookeeper/client/HostProvider.html" target="_top">Frames</a></li>
<li><a href="HostProvider.html" target="_top">No&nbsp;Frames</a></li>
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
<li>Constr&nbsp;|&nbsp;</li>
<li><a href="#method.summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li>Constr&nbsp;|&nbsp;</li>
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