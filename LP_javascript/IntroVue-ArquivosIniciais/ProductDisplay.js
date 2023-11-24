const productDisplayComponent = {
    props: { 
        premium: { 
        type: Boolean, 
        required: true }
     },
    template: /*html*/`
        <div class="product-display">
     <div class="product-container">
      <div class="product-image">
        <img :src="imagem" alt="" v-bind:class=" { 'out-of-stock-img': estoque === 0 }">
      </div>
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
        <div>
          <button class="button" @click="addCarrinho" :disable="!estoque" :class="{ disabledButton: !estoque }">Comprar</button>
          <button class="button" @click="removeCarrinho">Remover</button>
        </div>
        <p v-if="promoção">Promoção disponivel!!</p>
        <p>Frete: {{ frete}}</p>
        <p v-if="estoque > 10">Em estoque</p>
        <p v-else-if="estoque <= 10 && estoque > 0">Quase acabando</p>
        <p v-else>Fora de estoque</p>
        <a :href="URL">Link loja Próton</a>
      </div>
    </div>
  </div>          
    `, data() {
        return {
            carrinho: 0,
            produto: 'Camisa Próton',
            marca: 'GV Verejo',
            imagem: 'assets/images/proton_cinza.jpg',
            descrição: 'Uma camisa de cor azul com o logo da empresa Próton',
            URL: 'https://www.proton.com/',
            estoque: 0,
            produtoSelecionado: 0,
            promoção: true,
            detalhes: ['50% algodão', '30% poliéster', '20% lã'],
            cores: [
                { id: 'ED4F13', cor: '#ffffff', imagem: 'assets/images/proton_branca.jpg', quantidade: 10},
                { id: 'ED4F14', cor: '#a4a4a6', imagem: 'assets/images/proton_cinza.jpg', quantidade: 10},
            ]
        }
    },
    methods: {
        removeCarrinho(){
            if(this.carrinho > 0){
                this.carrinho--;
                this.cores[this.produtoSelecionado].quantidade ++;
            };
        },
        addCarrinho(){
            if(this.cores[this.produtoSelecionado].quantidade > 0){
                this.carrinho++;
                this.cores[this.produtoSelecionado].quantidade--;
            }
        },
       atualizaProdutoSelecionado(indice){
        this.produtoSelecionado = indice;
        this.imagem = this.cores[indice].imagem;
        this.estoque = this.cores[indice].quantidade;
       },

    },
    computed: {
        titulo(){
            return this.produto + ' ' + this.marca;
        },
        imagem(){
            return this.cores[this.produtoSelecionado].imagem;
        },
        estoque(){
            return this.cores[this.produtoSelecionado].quantidade;
        },
        frete(){
            if(this.premium){
                return 'Grátis'
            }else{
                return 'R$ 30,00'
            }
        }
    }
}

export default productDisplayComponent