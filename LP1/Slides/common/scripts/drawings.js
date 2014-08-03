
function binTree(data, container, customOptions) {
    // build the options object
    var options = $.extend({
        nodeRadius: 16,
        fontSize:   15,
        size: { width: 400, height: 200 },
        pos: { x: 0, y: 0 },
    }, customOptions);

    var tree = d3.layout.tree()
        .size([options.size.width, options.size.height])
        .children(function(d) {
            return (d.length > 1 ? d.slice(1) : null);
        });

    var nodes = tree.nodes(data);
    var links = tree.links(nodes);

    var layoutRoot = d3.select(container)
        .append("svg:svg")
        .attr("width",  options.size.width + options.pos.x + 50)
        .attr("height", options.size.height + options.pos.y + 50)
        .append("svg:g")
        .attr("class", "container")
        .attr("transform", "translate(0, " + 2 * options.fontSize + ")");


    var link = d3.svg.diagonal()
        .projection(function(d) {
            return [options.pos.x + d.x, options.pos.y + d.y];
        });

    layoutRoot.selectAll("path.link")
        .data(links)
        .enter()
        .append("svg:path")
        .attr("class", "link")
        .attr("d", link);

    var nodeGroup = layoutRoot.selectAll("g.node")
        .data(nodes)
        .enter()
        .append("svg:g")
        .attr("class", "node")
        .attr("transform", function(d) {
            return "translate(" + (options.pos.x + d.x) + "," + (options.pos.y + d.y) + ")";
        });

    nodeGroup.append("svg:circle")
        .attr("class", "node-dot")
        .attr("r", options.nodeRadius);

    nodeGroup.append("svg:text")
        .attr("text-anchor", "center")
        .attr("dx", -options.nodeRadius / 2)
        .attr("dy", +options.nodeRadius / 2)
        .text(function(d) {
            return d.length > 0 ? d[0] : null;
        });
}
