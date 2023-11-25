const ProductInfo = {
    props: {
        props: {
            type: Object,
            required: true
        }
    },
    template: /*html*/`
    <div class="product-info">
     <h1>{{ titulo }}</h1>
        <p>{{ descrição }}</p>
        <p>Composição:
        <ul>
          <li v-for="(detalhe, index) in detalhes" :key="index">{{ detalhe }}</li>
        </ul>
        </p>
        Cores disponiveis:
        <div v-for="(item,indice) in cores" :key="item.id" @mouseover="atualizaProdutoSelecionado(indice)" class="color-circle" :style="{ backgroundColor: item.cor }"></div>
        <p>R$ {{ cores[produtoSelecionado].price }}</p>
        <div>
          <button class="button" @click="addCarrinho" :disable="!estoque" :class="{ disabledButton: !estoque }">Comprar</button>
          <button class="button" @click="removeCarrinho">Remover</button>
        </div>
        <p v-if="promoção">Promoção disponivel!!</p>
        <p>Frete: {{ frete }}</p>
        <p v-if="estoque > 10">Em estoque</p>
        <p v-else-if="estoque <= 10 && estoque > 0">Quase acabando</p>
        <p v-else>Fora de estoque</p>
        <a :href="URL">Link loja Próton</a>
    </div>`,

}

export default ProductInfo;